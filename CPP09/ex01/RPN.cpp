#include "RPN.hpp"

using std::cout;
using std::endl;	
using std::string;
using std::stack;

int operation(int a, int b, char c){
    if (c == '/')
        return a / b;
    else if (c == '*')
        return a * b;
    else if (c == '-')
        return a - b;
    return a + b;
}

int is_operator(char c){
	if (c == '*' || c == '-' || c == '+'
		|| c == '/')
		return 1;
	return 0;
}

int	check_errors(string notation){
	int count_operands, count_operators;
	count_operands = count_operators = 0;
	for (size_t i = 0;i < notation.length();i++){
		if (!is_operator(notation[i]) && !isnumber(notation[i]) && notation[i] != ' ')
			return 0;
		else if (is_operator(notation[i]))
			count_operators++;
		else if (isdigit(notation[i]))
			count_operands++;
	}
	if (count_operands - count_operators != 1)
		return 0;
	return 1;
}

void Calculate(string notation){
    stack<int> stack;
    int first, second;
    for(size_t i = 0; i < notation.length();i++){
        while (isdigit(notation[i])){
            stack.push(notation[i] - '0');
            i++;
        }
        if (is_operator(notation[i])){
            if (stack.empty() || stack.size() < 2){
                cout << "Error" << endl;
                return ;
            }
            first = stack.top();
            stack.pop();
            second = stack.top();
            stack.pop();
            stack.push(operation(first, second, notation[i]));
            cout << stack.top();
        }
    }
    cout << stack.size() << endl;
    if (!stack.empty() && stack.size() == 1)
        cout << stack.top() << endl;
}

