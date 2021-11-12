# SITUACIÓN PROBLEMÁTICA A RESOLVER E IMPLEMENTAR

La municipalidad de una localidad dada ha resuelto automatizar y controlar una serie de
parámetros y eventos relacionados con los niveles de determinadas temperaturas y
luminosidad ambiente de los natatorios públicos cerrados, a fin de racionalizar energía.
A continuación, se detallan los requerimientos funcionales, parámetros y especificaciones
técnicas que, normativamente, habrán de caracterizar las propuestas tecnológicas a ser
presentadas por las diferentes entidades participantes.

#REQUERIMIENTOS FUNCIONALES
### 1. Funcionalidad del dispositivo

Debe satisfacer los siguientes objetivos:
- Controlar y regular las temperaturas del agua y ambiente del natatorio en función de un
rango predeterminado (con posibilidad de ser modificado el valor nominal de referencia,
por parte del usuario).
- Controlar el nivel lumínico (intensidad) ambiente del natatorio.
- Señalizar de modo visual y audible, en tiempo real, la mayor cantidad de eventos
(status funcionales) producidos.
- Poseer un protocolo básico de códigos de error que permitan comunicar la ocurrencia
de los mismos.
- Poseer un protocolo básico de mensajes y alarmas de señalización.

### Operar en dos modos diferentes:
permite el funcionamiento Automático y una opción de funcionamiento
Manual.

# ARQUITECTURA HARDWARE

1. El dispositivo correspondiente a la propuesta tecnológica, deberá estructurarse a partir de
una arquitectura micro-controlada embebida (familia tecnológica Arduino o similar).
La misma operará a modo de placa adquisidora de datos, procesamiento y actuación.
2. A nivel de campo, los datos serán colectados a partir de transductores, mientras que los
elementos a ser controlados serán operados por relays y/o motores (de acuerdo a lo que
amerite el caso).
3. La regulación de la temperatura del agua se llevará a cabo mediante la activación de una
electro-válvula (ON/OFF), que operará a modo de mando sobre una bomba eléctrica de
suministro de agua caliente.
4. El control de la temperatura ambiente deberá implementarse a partir de una acción de
regulación del tipo PWM (modulación del ancho de pulso) sobre un motor de corriente
continua asociado a un extractor de aire.
5. El control y regulación de la luz ambiente se establecerá a partir de un dimmer electrónico.
El mismo se implementará a partir de un esquema de regulación eléctrica basado en triacs,
cuya salida operará sobre un relay.
6. La señalización visual se habrá de establecer, preferentemente, mediante un display LCD (o,
en su defecto, display siete segmentos de longitud adecuada) e indicadores led auxiliares
(para los estados operativos generales: encendido; bloqueo; etc.).
7. La señalización auditiva se implementará mediante un oscilador electrónico de frecuencia
audible, siendo su carga un parlante convencional (o, en su defecto, un buzzer de tensión
continua).
8. La fuente de alimentación destinada a los elementos periféricos será externa a la
arquitectura micro-controlada, debiendo proveer la misma los niveles regulados de tensión
y corriente necesarios.

9. El acceso al dispositivo se realizará mediante un teclado del tipo matricial (de membrana o
construido mediante pulsadores NA independientes).
La asignación de los códigos funcionales y operativos, quedará a cargo del equipo de
desarrollo.


#PARÁMETROS INVOLUCRADOS

### 1. Temperaturas
En función de las disposiciones emanadas de las normativas vigentes, se deben
garantizar los siguientes rangos de temperatura:
Temperatura del agua: Entre 23 °C y 26 °C
Temperatura ambiente: Entre 24 °C y 28 °C
### 2. Intensidad lumínica
Rangos a definir y proponer por el equipo de desarrollo.
