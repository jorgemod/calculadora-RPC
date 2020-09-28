struct datos
{	
	char opcion;
	float dato1;
	float dato2;
};
program calculadora_PRG {
	version calculadora_VER {
		float calculadora(datos) = 1;
	} = 1;
} = 0x20000001;
