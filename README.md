# CTE
Control térmico de extrusora arduino

Este codigo utiliza la libreria que debe desacargarse desde la pagina web de arduino.

los modulos utilizados fueron modulos de simples, para activar una segunda etapa de potencia con un relay de alto consumo el cual
permitia controlar resitencias de 220 v a 3000w de consumo para lograr desde 170º hasta 300º de manera estable la temperatura con
una variacion de +/- 1º C , al mismo tiempo dentro de este codigo se puede modificar para controlar cualquier modulo o hacer otro 
proceso completamente diferente, todo estan en nuestra imaginacion.

El codigo automaticamente se detiene al llegar a la temperatura deseada y reinicia cuando la temperatura deciende.
