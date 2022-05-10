#!/bin/bash

for rep in $@
do
	newclass=${rep}
	upclass=${newclass^^}

	echo "#ifndef ${upclass}_HPP
# define ${upclass}_HPP
# include <iostream>

class	${newclass}
{
	public:
		${newclass}(void);
		${newclass}(const ${newclass}& src);
		${newclass}	&operator=(const ${newclass}& rhs);
		~${newclass}();

	private:
	
};

#endif" > "${newclass}.hpp"

	echo "#include \"${newclass}.hpp\"

${newclass}::${newclass}(void)
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
