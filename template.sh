#!/bin/bash

for rep in $@
do
	newclass=${rep}
	upclass=${newclass^^}

	echo "#ifndef ${upclass}_HPP
# define ${upclass}_HPP
# include <iostream>
# include <string>
//# include \".hpp\"

class	${newclass}
{
	public:
	${newclass}();
	${newclass}(const ${newclass}& src);
	${newclass}	&operator=(const ${newclass}& rhs);
	~${newclass}();

	protected:
	string	_name;
};

#endif" > "${newclass}.hpp"

	echo "#include \"${newclass}.hpp\"

${newclass}::${newclass}(string name)
{

}
${newclass}::${newclass}(const ${newclass}& src)
{
	*this = src;
}

${newclass}	&${newclass}::operator=(const ${newClass}& rhs)
{

	return (*this);
}

${newclass}::~${newclass}()
{

}" > "${newclass}.cpp"
done
