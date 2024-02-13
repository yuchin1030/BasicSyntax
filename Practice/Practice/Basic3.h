/*
	class ���赵 ���� => class ���� Ÿ�� ����

	* ���� ���� : ������Ƽ/�޼ҵ忡 ���� ����
		- public : ���� - Ŭ�����ٱ� ��ġ���� ���� ����
		- private :���� - Ŭ���� ���� ��ġ������ ���� ����
		- protectted : ��� ���� - ��ӹ��� Ŭ�������� ���� ����
		- Ű���带 ������� ������ private�� ����Ʈ

		- ������Ƽ�� Ŭ���� �ܺο��� �������� ���ϰ� �ϴ� ��찡 �Ϲ��� => private ���·� ����
		- ������Ƽ�� �����ϴ� ���� �޼ҵ� �ʿ�

	* Set/Get �޼ҵ�
		- Set : Ŭ���� ���� ������Ƽ�� �����͸� ����
		- Get : ������Ƽ�� �����͸� �о��
*/

class CarSUV {

private:
	int number = 1234;
	char brand = 'A';
	char color = 'R';
	int door = 5;
	int seat = 7;

public:
	CarSUV();

	~CarSUV();

	void SetNumber(int number) {
		if (number >= 9999) {
			cout << "�߸��Է��߽��ϴ�." << endl;
		}
		else {
			this->number = number;
		}

	}

	int GetNumber() {
		return number;
	}

	void CarPrint();
};

class Phone {

private:
	char color;
	char brand;
	int modelNumber;

public:
	Phone(char color, char brand, int modelNumber);
	~Phone();
	char GetColor(char item);
};

