#pragma once

#define		KEY_CODE_SPACE			-1		// ����
#define		KEY_CODE_ENTER			-2		// ��������
#define		KEY_CODE_BACKSPACE		-3		// �����

class CAutomataKR
{
public:
	CAutomataKR(void);
	~CAutomataKR(void);

public:
	void		Clear();					// �����ʱ�ȭ
	wchar_t		SetKeyCode(int	nKeyCode);	// Ű�ڵ� �ޱ� (������ int �ڵ尪�� �Է� �޾� �ѱ�����)

	wchar_t		ingWord;		// �ۼ��� ����
	CString		completeText;	// �ϼ� ���ڿ�

private:
	enum	HAN_STATUS		// �ܾ����ջ���
	{
		HS_FIRST = 0,		// �ʼ�
		HS_FIRST_V,			// ���� + ���� 
		HS_FIRST_C,			// ���� + ����
		HS_MIDDLE_STATE,	// �ʼ� + ���� + ����
		HS_END,				// �ʼ� + �߼� + ����
		HS_END_STATE,		// �ʼ� + �߼� + ���� + ����
		HS_END_EXCEPTION	// �ʼ� + �߼� + ����(������)
	};

	int			m_nStatus;		// �ܾ����ջ���
	int			m_nPhonemez[5]; // ����[��,��,��,������1,������2]

	wchar_t		m_completeWord;	// �ϼ�����


	// ��ȯ 
	int			ToInitial(int nKeyCode);	// �ʼ�����
	int			ToFinal(int nKeyCode);		// ��������


	// ���� 
	void		DecomposeConsonant();		// ��������


	// �ռ� 
	BOOL		MixInitial(int nKeyCode);	// �ʼ��ռ�
	BOOL		MixFinal(int nKeyCode);		// �����ռ�

	BOOL		MixVowel(int * nCurCode, int nInCode);	// �����ռ�


	// ����(�ѱۿϼ�) 
	wchar_t		CombineHangle(int cho, int jung, int jong);
	wchar_t		CombineHangle(int status);
	void		CombineIngWord(int status);

	int			DownGradeIngWordStatus(wchar_t word);	//���� ���� ���� ���߱�
};
