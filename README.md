# 1 užduotis #

## Paskirtis ##
Programa skirta išvesti įrėmintą pasisveikinimą su vartotojo vardu.

## Veikimo principas ##
* Programa paprašo vartotojo įvesti savo vardą. Jei vardas įvedamas su neleidžiamaisiais simboliais (ne raidėmis), išvedama klaida ir vartotojas turi įvesti vardą dar kartą.
* Vartotojo paprašoma įvesti rėmelio ilgį ir plotį. Jei rėmelio ilgis ir plotis neatitinka programos reikalavimų (rėmelio ilgis yra lygus eilučių skaičiui ir turi būti nelyginis skaičius nemažesnis už 3; rėmelio plotis turi būti didesnis už pasisveikinimo ilgį + 2 ir būti lyginis/nelyginis priklausomai nuo pasisveikinimo ilgio lyginumo/nelyginumo).
* Pasisveikinimas priklauso nuo vardo. Jei vardas vyriškas, pasisveikinimas yra "Sveikas,", jei moteriškas - "Sveika,".
* Vardo pirma raidė visada pakeičiama į didžiąją.
* Vyriško vardo galūnės pakeičiamos priklausomai nuo vardo vardininko galūnės ("-is" - "-i", "-ius" - "-iau", "-as" - "-ai").
* Pasisveikinimas su vardu išvedamas pasirinkto dydžio rėmelyje.


## Įdiegimo instrukcija ##
* Atsisiųskite norimą programos versiją (rekomenduojama atsisiųsti naujausią - v1.0 versiją) iš [Releases](https://github.com/aistestonciute/1_uzd/releases) aplanko.
* Išarchyvuokite parsisiųstą failą.
* Paleiskite main.cpp programą naudojantis C++ IDE (pvz. CodeBlocks arba Visual Studio) arba per komandinę eilutę.

## Veikimo instrukcija ##
* Įveskite savo vardą vardininko linksniu. Jei įvedėte neteisingus simbolius, įveskite vardą iš naujo.
* Įveskite rėmelio ilgį (eilučių skaičių) ir plotį. Jei neteisingai įvedėte šiuos skaičius, įveskite juos iš naujo.

## Versijos ##

* [v1.0](https://github.com/aistestonciute/1_uzd/releases/tag/v1.0) Pridedamas README.md failas. Programa išveda įrėmintą vardą su pasisveikinimu pagal visus veikimo principus.
* [v0.7](https://github.com/aistestonciute/1_uzd/releases/tag/v0.7) Pagrindinė funkcija išskirstyta į mažas funkcijas. Kintamieji width ir length sukeisti vietomis (patogesnis ir logiškesnis kodas). Iš vartotojo pusės ši versija niekuo nesiskiria nuo v0.6.
* [v0.6](https://github.com/aistestonciute/1_uzd/releases/tag/v0.6) Vartotojo įvestas vardas pasisveikinime visada pradedamas iš didžiosios raidės. Vartotojas gali įvesti rėmelio plotį ir ilgį (eilučių skaičių).
* [v0.5](https://github.com/aistestonciute/1_uzd/releases/tag/v0.5) Programa patikrina ar vartotojo įvestas vardas turi neleistinų simbolių (visi simboliai, kurie nėra raidės yra neleistini). Jei taip, tuomet programa išveda klaidą ir paprašo vartotojo įvesti vardą iš naujo.
* [v0.4](https://github.com/aistestonciute/1_uzd/releases/tag/v0.4) Pakeistas kreipinys į vyriškus vardus, kurie baigiasi "-ius", "-is", "-as" į "-iau", "-i", "-ai".
* [v0.3](https://github.com/aistestonciute/1_uzd/releases/tag/v0.3) Pasveikinimas "Sveiki," pakeistas į "Sveikas," arba "Sveika," priklausomai nuo vardo.
* [v0.2](https://github.com/aistestonciute/1_uzd/releases/tag/v0.2) Supaprastina v0.1 versiją - vietoje 5 eilučių kintamųjų naudojami 2 kintamieji.
* [v0.1](https://github.com/aistestonciute/1_uzd/releases/tag/v0.1) Atspausdina įvestą vardą su 5 eilučių rėmeliu ir numatytu pločiu.
