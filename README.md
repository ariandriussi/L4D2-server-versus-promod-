# L4D2-server-versus-promod-


# Cosas importantes

- Este servidor está pensado solamente para ser jugado en modo enfrentamiento aunque funciona perfectamente en campaña,
puede tener problemas ya que no se tuvo mucho en cuenta en ese modo.
- Soló uso este servidor de forma local no conozco una forma de hacerlo dedicado por lo que si tú sabes como hacerlo, hazlo.



## Instalación:

 Copia las carpetas **Addons** y **cfg** en la carpeta left4dead2 de la carpeta raiz del juego EJ:
```
 C:\Program Files (x86)\Steam\steamapps\common\Left 4 Dead 2\left4dead2
```
Ahora para que se pueda ejecutar el servidor de forma local debes poner en los parámetros de lanzamiento de left 4 dead 2: **-secure** este comando debes sacarlo cuando vallas a jugar en servidores comunes ya que el mismo bloquea los accesos. También puedes poner el parámetro **-tickrate 100** para poder ejecutar el servidor a 100 tick ***los tickrates dependen de tus fps si vas a 70 fps sólo llegaran a 70 ticks***.

![parametros](https://user-images.githubusercontent.com/79541286/166858412-110b5205-a830-46f2-a400-35d3ba1f100a.png)




recomiendo borrar soló la E final para no tener que escribir siempre todo de vuelta.

asegúrate de elegir el modo local:

![modo local](https://user-images.githubusercontent.com/79541286/166856791-bb909ded-65fb-4c74-a6aa-12b6247f0e13.png)


### Características generales: 


1.	Es posible jugar tanto en campaña como en enfrentamiento.
2.	Sólo hay armas T1.
3.	En campaña si te quedas quieto se pondrá en modo descanso y los bots avanzaran por si solos.
4.	No hay botiquines ni ningún tipo de granada molotov/casera/vomitona.
5.	Los supervivientes sólo cuentan con 4 píldoras al inicio y podrán encontrar más por el camino y algún que otra adrenalina.
6.	En cada mapa encontraras un cajón de armas que contiene todas las armas t1 como este
![cajon de armas](https://user-images.githubusercontent.com/79541286/166854575-78ba5df9-4f6c-4963-9013-6c8107d1fbfa.png)

7.	Los infectados bot tienen la IA mejorada y actúan como si estuvieras en experto además el tank no se puede quemar.
8.	No está habilitado el fuego amigo.
9.	Los infectados no sufren daño al ser golpeados (m2) por un superviviente.


### Características del administrador:



- En el chat escribiendo **!admin** se abre el menú del administrador (***para esto debes ponerte como admin, instrucciones abajo***)

![admin](https://user-images.githubusercontent.com/79541286/166857242-454278c1-dc8e-46ac-a4aa-365c42b27381.png)




- Escribiendo **!hp** en el chat se les regenera la vida a los supervivientes.
-  Escribiendo **!respawn** podrás hacer aparecer un superviviente muerto, este mismo aparecerá con una smg, píldora y vida llena.

![respawn](https://user-images.githubusercontent.com/79541286/166856971-af5ccb38-4a5c-4a12-b37e-e5b8cc8388dc.png)

 - Escribiendo **!forcepause** el servidor se pausa, ejecuta el mismo comando para sacar la pausa.
 
![pause](https://user-images.githubusercontent.com/79541286/166857112-28090cd2-bc56-41c0-b09d-c30e3ed19686.png)

- Si intentan expulsar a un administrador el jugador que mandó el kick será expulsado de forma automática.


### instrucciones para activar el admin
1) Ve a la siguiente dirección del archivo: 
```
C:\Program Files (x86)\Steam\steamapps\common\Left 4 Dead 2\left4dead2\addons\sourcemod\configs 
```
2) Abre el archivo admins.cfg con un bloc de notas
 ![admins.cfg](https://user-images.githubusercontent.com/79541286/166853335-e370dc4a-1a49-4485-85e5-11f445c3e3a4.png)
 3) En la parte de admins entre los paréntesis debes poner algunos datos como el ejemplo de arriba.
```
	"BAILOPAN"
	{
		"auth"			"steam"
		"identity"		"STEAM_0:1:16"
		"flags"			"abcdef"
	}
```
- **BAILOPAN** cambialo por tu nombre de steam ***importante tener un nombre por defecto en tu steam ya que si lo cambias no te reconocerá como admin***
- **auth** sólo debes dejarlo como está escrito.
- **identity** debes poner tu steam ID, ¿No sabes tu steam ID? prueba esta pagina: [Steam ID Finder](https://steamid.pro/es/).
- **flags** son los permisos que tiene el usuario, en el archivo admin_levels.cfg se ven los detalles de los permisos.
- En el documento por defecto tiene como admistrador a mí y a unos amigos puedes tomarlos de referencia y luego eliminarlos.
4) Finalmente guarda el archivo.


## Modificación del mensaje automático

Si te fijas cada tanto de forma automática sale un mensaje que dice "gracias por entrar al servidor"

![gracias por entrar](https://user-images.githubusercontent.com/79541286/166860042-a533196a-8b03-41d1-b49e-e28a0dd9f187.png)

### Este mensaje lo puedes modificar a tu gusto aquí las instrucciones:
1) Debemos descargar [notepad++](https://notepad-plus-plus.org/downloads/)


2) Una vez descargado ejecutamos el programa y dentro vamos a **file - open** y buscamos el archivo **sm_killcounter.sp** en la siguiente dirección:
```
C:\Program Files (x86)\Steam\steamapps\common\Left 4 Dead 2\left4dead2\addons\sourcemod\scripting
```
3) Busca la línea **122** y ahí encontraras el mensaje escrito, pon ahí el mensaje que quieras.
4) Guarda el archivo y en la misma carpeta arrastra el archivo **sm_killcounter.sp** hasta **compile.exe**.
5) En la carpeta compiled se encontrará el archivo ya compilado.
6) Copia el nuevo archivo a esta  dirección.

```
C:\Program Files (x86)\Steam\steamapps\common\Left 4 Dead 2\left4dead2\addons\sourcemod\plugins
```
7) Si te pide remplazar hazlo.



