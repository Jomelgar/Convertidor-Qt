    #ifndef CONVERSOR_H
    #define CONVERSOR_H

    #include <QString>
    #include <math.h>


    inline QString valor_Hex(const int& valor)
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

    inline QString recursivadecimal(const int &valor){
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


    inline int valor_Dec(const QChar &letra)
    {
        if(letra >= '0' && letra <= '9')
        {
            return letra.unicode() - '0';
        }
        else
        {
            return letra.unicode() - 55;
        }
    };


    inline int recursivahex(const QString &cadena, const int &i = 0)
    {
        const int j = cadena.length() - 1 - i;
        if (i == cadena.length())
        {
            return 0;
        }

        return (valor_Dec(cadena[i]) * std::pow(16, j)) + recursivahex(cadena, i + 1);
    }

    #endif // CONVERSOR_H
