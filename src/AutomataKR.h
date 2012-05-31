#pragma once

#define		KEY_CODE_SPACE			-1		// ����
#define		KEY_CODE_BACKSPACE		-2		// �����

class CAutomataKR
{
public:
	CAutomataKR(void);
	~CAutomataKR(void);

public:
	void	Clear();					// ���� �ʱ�ȭ
	void	Reset();					// ��� �ʱ�ȭ
	void	SetKeyCode(int nKeyCode);	// Ű�ڵ� �ޱ� (������ int �ڵ尪�� �Է� �޾� �ѱ� ����)

	// �ۼ� �� �ؽ�Ʈ �ޱ�
	CString	GetText()	{return m_strText;}

private:
	enum	HAN_STATUS	// �ܾ� ���� ����
	{
		HS_NULL = 0,	// �ƹ��͵� ���� ����
		HS_FIRST,		// �ʼ�
		HS_MIDDLE,		// �ʼ� + �߼�
		HS_END,			// �ʼ� + �߼� + ����
	};

	UINT	m_uPhonemes[3];		// ����[��,��,��]

	TCHAR	m_chWord;			// �ۼ� �� ����
	CString	m_strText;			// �ۼ� �� �ܾ�

	UINT	m_uStatus;			// �ܾ� ���� ����

	CString	m_strCompletedText;	// �ϼ��� ���ڿ�

	// ����(�ѱۿϼ�) 
	TCHAR	CombineHangle(UINT cho, UINT jung, UINT jong);
	TCHAR	CombineHangle();
};

UINT GetCodeOrder(UINT uRow, UINT uCol);
TCHAR ConvertCode2Key(UINT uKeyCode);