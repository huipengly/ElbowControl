#ifndef __PID_POSITION_H_
#define __PID_POSITION_H_
//λ��ʽPID
class PID_Position
{
private:
	float kp;		//����ϵ��
	float ki;		//����ϵ��
	float kd;		//΢��ϵ��
	float target;	//Ŀ��ֵ
	float actual;	//ʵ��ֵ
	float err;		//���
	float err_pre;	//��һ�����
	float integral;	//������
public:
	PID_Position();
	PID_Position(float p, float i, float d);
	//~PID_Position();
	void pid_set(float p, float i, float d);
	float pid_control(float tar, float act);//ִ��PID����
};

#endif //__PID_H_