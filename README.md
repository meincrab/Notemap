# Information about project

https://youtu.be/yvEHhh2qvJQ

### Ekaterina Piispanen

* Listan käsittely - 38 h (eniten tein viikko 47,48, mutta tein muutoksia viikkoilla 49 ja 50)
* Tietokanta - 26h (v 48, 49)
* Listan ja tietokannan yhdistäminen - 10h (v 49)
* Toast ilmoitus - 3h (v 50)
* Ilmoitus puhelimelle - 4h (v 50)
* Virheiden korjaus - 7h (v 50)
* Dokumentaatio - 6h (v 50)
* QML Kaavi - 1h (v 50 ei onnistui)
* Yhteensä - 95h

Listalle meni niin paljon aikaa, koska halusin tehdä "nested" lista ja se ei onnistunut niin helposti modelien kanssa. Itsearviointi on 3, koska tein melkein kaikki mitä halusin
ja opin paljon uutta.



### Alexander Andreev
* QT:n asennus Linux ympäristöön 17-20h. Asennuksen aikana tuli bugi AVD managerin kanssa, vikan etsimiseen ja korjamiseen meni muutama päivä. Viikko 47
* Karttan ja sen elementtien dynaaminen onClick Generoiti javascriptin avulla - Failed 20h Viikko 47-50
* Perehtyminen QT:n c++ ohjelmointiin 30h - - Failed 25-30h Viikko 47-50
* Osoite->koordinaatit geoparseri javascript/c++ 30h failed. Viikko 49-50
* Dokumentaatio 3h
* Videon tekeminen - 3h
* Yhteensä ~90h-110h. 

Itsearviointi. Arvosana: 1.  
Aikaa ja hermoja on tullut käytettyä tosi paljon , mutta 90% ajasta meni turhiin yrityksiin, jota eivät antaneet odotettua tulosta.

Omien suunnitelmien mukaan, oman työn alla oli tosi yksinkertainen keissi.
Siitä huolimatta , että tulos on kauhea, olen kuitenkin tyytyväinen kun on tullut opittu tosi paljon uutta.


Tavoitteena oli saada dynaamisen kartan ja sen elementtien dynaaminen luonti osoittelistanperusteella.  
Alkuvaiheessa käytin tosi paljon aikaa turhaan, kun minulla oli väärä käsitys miten QML:n elementit toimivat.  
Yritin luoda kaikki elementit kerallaan yksinkertaisen javascriptin avulla, siihen meni muutama päivä aikaa.  
Sen jälkeen tajusin että tästä ei tule mitään, ja olen aloitanut tutkimaan miten onnistuu toiminnalisuuden toteutus QT C++:n avulla.  
Generoitu qml elementti ei pystynyt automaatisesti hakea koordinatit "Open Street Map" palvelimelta, eikä Esrilta.  
Taas tuli väärä käsitys miten kaikki toimii, kuten sanotaan "Remember: just a few hours of attempts and mistakes can save you as much as five minutes of reading the documentation."  
Löysin sopivan kirjaston ja olen aloittanut toteuttamaan funktiota joka muuttaa osoitetta koordinaateiksi qml:n ulkopuolella. Palvelin palauttaa NUllia..   
Vihdoin netistä löysin esimerkin, missä on hyvin esitetty miten käytetään siitä kirjastoa. Yritin toteuttaa esimerkin mukaan. Ei toimi.  
Viimeisenä päivänä löysin toisen esimerkin, mutta en ole ehtinyt toteutta siitä.  
Siihen meni noin 100h aikaa...  


  
  
### Tatu Paajanen
* Aluksi piti muistella kuinka Qt toimikaan 10h
* Hälytyksen saaminen 40h
* Ajan toiminta 40h
* Dokumentaatio 3h

Tutkin kuinka saada hälytys/ilmoitus käyttäjälle, käyttäjän valittuun aikaan. Sehän oli monimutkainen ja monivaiheinen eikä se lopulta onnistunut niinkuin piti. 
Ongelmana oli että notifikatio toimintoa ei ole valmiina Qt:ella ja sen tajuamisessa meni kauan.
Lopulta(Pitkän ajan jälkeen) muistin, että Qt:lla on valmiita projekteja josta, löysin notifikation toiminnan javaa koodia käytettynä.
Sitten yritin saada että se muistuttaisi käyttäjän laittaman ajan perusteella, milloin muistutus lähetetään. En kuitenkaan löytänyt mitään sovellettavaa tapaa saada sitä toimimaan ja kaikki yritykset menivät mönkään.

Lopulta kuitenkin sain että se ilmoittaa käyttäjälle, kun tämä tekee taskin/muistutuksen.
Itsearvioinnin arvosanaksi: 1 sillä en saanut sitä toimimaan kuin piti. Olen kuitenkin tyytyväinen, sillä opin paljon ja että sain jotain edes toimimaan.
      
        
          
            
               
                 
                   
                     
                       
                         
                           
                             
                                
# Mobile Project Starter Repository
This is an Mobile Project starter repository repository.

## How to work
Each student group downloads this starter repository from the Mobile Project 
workspace at JAMK GitLab. After that, each student group (only one member) need to import this 
starter repository back to JAMK GitLab with his/her own account and complete
mobile project inside this repository with project group.

Student needs to send all the project group student names, studentIDs and 
repository url to teacher via email immediately after student has 
imported this repository back to GitLab using his/her own account 
(repository name and path is then available).

Student need to add teacher to repository member for an evaluation purposes. Teacher need at least Reporter role.
Student need to add other project group members to repository members. Other students
needs at least Developer role.

Student need to use this repository Issues Boards and drag an issues from 
<b>Backlog</b> to <b>Doing</b> section when student group start's working with an issue. 
Student group need to remember move an issue to <b>In Review</b> section in Issues Boards when student group has 
finished an issue work and pushed files back into his/her repository at JAMK GitLab. 
This way teacher knows that student has finished an issue and teacher can start an evaluation process with that issue. 
Teacher will move an issue to the <b>Closed</b> section in a Issues Boards when issue is approved. 
Teacher is monitoring your project learning process all the time!

Remember you can add an comments/notes to issues when you are moving it in Issues Boards. Teacher can also see your comments.

Read carefully all the informations and rules below before you start doing your project work!

## Repository structure
### README.md
Each mobile project repository should include README.md file which contains
information about your project work. Describe how the project has been done. 
Include needed links to other related materials in a web which describes how 
your/group have done a project work. You can record for example a video and upload it 
to YouTube or you can add videos and/or screenshots folder in your repository.
For video recording, you can use e.g. <a href="https://screencast-o-matic.com/" target="_blank">Screencast-O-Matic</a>.

Remember add your own self-evaluation (member and group) about your project work in README.md. Each project group member should write own self-evaluation.

You can/need/should modify this README.md file to your own purposes.

### Documentation folder
Each Mobile Project starter repository should include Documentation folder. This folder 
contains all created documentation. Each member of the project group need to 
keep track of what have done and when (important!). You can deside what tools your are using
to keep track of your doing and how you will present it here in the 
documentation. Project group need to keep a presentation 
and one good way is to use PowerPoint to made a few slides about your research. 
Prepare to show your application demo somehow. You can add Screenshots and/or
Videos folder inside your Documentation folder or link to YouTube. These 
screenshots and videos demonstrates your research demo application functionality. 
You can also record your presentation and include presentation video here in 
Documentation/Videos folder or publish it to YouTube and link it.

Project work will not be accepted if Documentation folder is missing 
and it doesn't contain needed materials for evaluation.  

### Other folders and files
Include all other research materials as a source codes etc... 
in this repository too.

### Repository structure example
Below is an example repository structure. Example contains README.md file and 
Documentation folder. All other files are related to research assignment
project topic.

 File/Folder        | Description           
-------------|-------------
README.md | This file (you can edit it for your purpose)
Documentation | Documentation folder
Documentation/planning | Planning folder
Documentation/planning/planning.pdf | Planning documentation in pdf format
... | ...
Documentation/presentation.pptx | Presentation Powerpoint
Documentation/Video | Documentation video folder
Documentation/Video/AppDemo.mp4 | How demo application is working
Documentation/Video/Presentation.mp4 | Recorded presentation (if not kept in live)
Documentation/Images | Documentation images folder
Documentation/Images/ScreenShot01.png | First screenshot
Documentation/Images/ScreenShot0X.png | X screenshot
... | ...
Project/ | Your Android demo application project folder and files
... | ...
Other Directories | Other possible files
... | ...

## Evaluation
Download and import this mobile project starter repository and invite (add members) other project group members
to your repository and start doing your project work. Remember
check that teacher is member in your repository. All the evaluation criterias 
can be found in Mobile Project repository.

Remember use Issues Board when some of the issues are ready to move other lists in Issues Board.

## Tutorials and other sources used in research
If you are using tutorials to get familiar with your selected topic, or if 
you are using any lines of coding from some other  source, remember mention 
that in your documentation and your coding files. Mobile Project will 
not be accepted if it contains some other people made coding files and those 
are not correctly told in documentation/coding files. 

Remember copyrights! 