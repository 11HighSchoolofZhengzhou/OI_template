/*����ԱȽ϶̵��ַ�������Ч�����һ����ϣ����*/

typedef unsigned long UL;

UL ELFhash(const char *pstr)
{
	UL h = 0;
	UL x = 0;
	char *str = (char *)pstr;
	while(*str)
	{
		h = (h << 4)+(*str++);
		if((x = h & 0xF0000000L) != 0)
		{
			h ^= (x >> 24);
			h &= ~x;
		}
	}
	return h;
}