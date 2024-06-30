#ifndef MIPS_COMPONENT_H
#define MIPS_COMPONENT_H

#include <vector>

class Component {
public:
	Component(int inputSize, int outputSize);

	std::vector<bool> input;
	std::vector<bool> output;

	virtual bool run();

	void set(const std::vector<bool> &in);

protected:
	std::vector<bool> backup_output;
	std::vector<Component *> components;

	virtual void setComponent() = 0;
	virtual void setInputComponent() = 0;
	virtual void setOutputComponent() = 0;

	virtual bool runComponent();

	void backupOutput();
	bool isChangeOutput();
};


#endif //MIPS_COMPONENT_H
