#pragma once

#define		KEY_CODE_SPACE			-1		// 띄어쓰기
#define		KEY_CODE_BACKSPACE		-2		// 지우기

class CAutomataKR
{
public:
	CAutomataKR(void);
	~CAutomataKR(void);

public:
	void	Clear();					// 버퍼 초기화
	void	Reset();					// 모두 초기화
	void	SetKeyCode(int nKeyCode);	// 키코드 받기 (정해진 int 코드값을 입력 받아 한글 조합)

	// 작성 중 텍스트 받기
	CString	GetText()	{return m_strText;}

private:
	enum	HAN_STATUS	// 단어 조합 상태
	{
		HS_NULL = 0,	// 아무것도 없는 상태
		HS_FIRST,		// 초성
		HS_MIDDLE,		// 초성 + 중성
		HS_END,			// 초성 + 중성 + 종성
	};

	UINT	m_uPhonemes[3];		// 음소[초,중,종]

	TCHAR	m_chWord;			// 작성 중 글자
	CString	m_strText;			// 작성 중 단어

	UINT	m_uStatus;			// 단어 조합 상태

	CString	m_strCompletedText;	// 완성된 문자열

	// 조합(한글완성) 
	TCHAR	CombineHangle(UINT cho, UINT jung, UINT jong);
	TCHAR	CombineHangle();
};

UINT GetCodeOrder(UINT uRow, UINT uCol);
TCHAR ConvertCode2Key(UINT uKeyCode);