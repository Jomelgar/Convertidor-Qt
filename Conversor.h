    #ifndef CONVERSOR_H
    #define CONVERSOR_H

    #include <QString>
    #include <math.h>


    inline QString valor_Hex(int valor)
    {
        if(valor < 10)
        {
            return QString::number(valor);
        }else
        {
            char entrada = valor + 55;
            return QChar(entrada);
        }
    };

    inline QString recursivadecimal(const int valor){
        const int cociente = valor/16;
        const int residuo = valor%16;

        if(cociente > 16)
        {
            return recursivadecimal(cociente) + valor_Hex(residuo);
        }

        if(residuo == 0)
        {
            return valor_Hex(cociente);
        }else
        {
            return valor_Hex(cociente) + valor_Hex(residuo);
        }
    };


    inline int valor_Dec(const QChar letra)
    {
        if(letra >= '0' && letra <= '9')
        {
            return letra.unicode() - '0';
        }
        else
        {
            return letra.unicode() - 'A' + 10;
        }
    };


    inline int recursivahex(const QString cadena, const int i=0)
    {
        if(i == cadena.length())
        {
            return 0;
        }

        return (valor_Dec(cadena[0]) * std::pow(16,i)) + recursivahex(cadena,i+1);
    };

    #endif // CONVERSOR_H
