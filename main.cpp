#include <iostream>         // Inclusion de la bibliothèque standard pour les entrées/sorties (affichage dans la console).
#include <string>           // Inclusion de la bibliothèque standard pour manipuler les chaînes de caractères (std::string).
#include <unordered_map>    // Inclusion de la bibliothèque standard pour les tables de hachage non triées (std::unordered_map).
#include <vector>           // Inclusion de la bibliothèque standard pour les tableaux dynamiques (std::vector).
#define NOMINMAX            // Définition pour éviter les conflits avec les macros MIN et MAX de Windows.
#include <Windows.h>        // Inclusion de l'en-tête Windows pour utiliser certaines fonctions de la console Windows.


std::unordered_map<std::string, std::vector<std::string>> championRoles;
// Déclaration d'une table de hachage (std::unordered_map) appelée championRoles.
// La clé de la table de hachage est de type std::string (une chaîne de caractères).
// La valeur associée à chaque clé est un vecteur (std::vector) de chaînes de caractères (std::string).
// Cette structure permet d'associer les noms des champions à leurs rôles 

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //permet de manipuler la couleur du texte

void initializeChampionRoles() {
    
    championRoles["Aatrox"] = { "Top" };
    championRoles["Ahri"] = { "Mid" };
    championRoles["Akali"] = { "Mid", "Top" };
    championRoles["Akshan"] = { "ADC", "Mid" };
    championRoles["Alistar"] = { "Support", "Mid" };
    championRoles["Amumu"] = { "Jungle" };
    championRoles["Anivia"] = { "Mid" };
    championRoles["Annie"] = { "Mid", "Support" };
    championRoles["Aphelios"] = { "ADC" };
    championRoles["Ashe"] = { "ADC" };
    championRoles["AurelionSol"] = { "Mid" };
    championRoles["Azir"] = { "Mid" };
    championRoles["Bard"] = { "Support" };
    championRoles["Belveth"] = { "Jungle" };
    championRoles["Blitzcrank"] = { "Support" };
    championRoles["Brand"] = { "Support", "Mid" };
    championRoles["Braum"] = { "Support" };
    championRoles["Caitlyn"] = { "ADC" };
    championRoles["Camille"] = { "Top" };
    championRoles["Cassiopeia"] = { "Mid" };
    championRoles["Cho'Gath"] = { "Top" };
    championRoles["Corki"] = { "Mid", "ADC" };
    championRoles["Darius"] = { "Top" };
    championRoles["Diana"] = { "Mid", "Jungle" };
    championRoles["DrMundo"] = { "Top", "Jungle" };
    championRoles["Draven"] = { "ADC" };
    championRoles["Ekko"] = { "Mid", "Jungle" };
    championRoles["Elise"] = { "Jungle" };
    championRoles["Evelynn"] = { "Jungle" };
    championRoles["Ezreal"] = { "ADC", "Mid" };
    championRoles["Fiddlesticks"] = { "Jungle", "Support" };
    championRoles["Fiora"] = { "Top" };
    championRoles["Fizz"] = { "Mid" };
    championRoles["Galio"] = { "Mid", "Support" };
    championRoles["Gangplank"] = { "Top" };
    championRoles["Garen"] = { "Top" };
    championRoles["Gnar"] = { "Top" };
    championRoles["Gragas"] = { "Jungle", "Support" };
    championRoles["Graves"] = { "Jungle" };
    championRoles["Gwen"] = { "Top" };
    championRoles["Hecarim"] = { "Jungle" };
    championRoles["Heimerdinger"] = { "Mid" };
    championRoles["Illaoi"] = { "Top" };
    championRoles["Irelia"] = { "Top", "Mid" };
    championRoles["Ivern"] = { "Jungle" };
    championRoles["Janna"] = { "Support" };
    championRoles["JarvanIV"] = { "Jungle" };
    championRoles["Jax"] = { "Top", "Jungle" };
    championRoles["Jayce"] = { "Top", "Mid" };
    championRoles["Jhin"] = { "ADC" };
    championRoles["Jinx"] = { "ADC" };
    championRoles["K'Santé"] = { "Top" };
    championRoles["KaiSa"] = { "ADC" };
    championRoles["Kalista"] = { "ADC" };
    championRoles["Karma"] = { "Support", "Mid" };
    championRoles["Karthus"] = { "Mid", "Jungle" };
    championRoles["Kassadin"] = { "Mid" };
    championRoles["Katarina"] = { "Mid" };
    championRoles["Kayle"] = { "Top", "Mid" };
    championRoles["Kayn"] = { "Jungle" };
    championRoles["Kennen"] = { "Top", "Mid" };
    championRoles["KhaZix"] = { "Jungle" };
    championRoles["Kindred"] = { "Jungle" };
    championRoles["Kled"] = { "Top" };
    championRoles["Kog'Maw"] = { "ADC" };
    championRoles["LeBlanc"] = { "Mid" };
    championRoles["Lee Sin"] = { "Jungle" };
    championRoles["Leona"] = { "Support" };
    championRoles["Lillia"] = { "Jungle" };
    championRoles["Lissandra"] = { "Mid" };
    championRoles["Lucian"] = { "ADC", "Mid" };
    championRoles["Lulu"] = { "Support", "Mid" };
    championRoles["Lux"] = { "Support", "Mid" };
    championRoles["Maître Yi"] = { "Jungle" };
    championRoles["Malphite"] = { "Top", "Support" };
    championRoles["Malzahar"] = { "Mid" };
    championRoles["Maokai"] = { "Top", "Support" };
    championRoles["Milio"] = { "Support" };
    championRoles["Miss Fortune"] = { "ADC", "Support" };
    championRoles["Mordekaiser"] = { "Top" };
    championRoles["Morgana"] = { "Support", "Mid" };
    championRoles["Naafiri"] = { "Mid" };
    championRoles["Nami"] = { "Support" };
    championRoles["Nasus"] = { "Top" };
    championRoles["Nautilus"] = { "Support" };
    championRoles["Neeko"] = { "Mid", "Support" };
    championRoles["Nidalee"] = { "Jungle" };
    championRoles["Nilah"] = { "ADC" };
    championRoles["Nocturne"] = { "Jungle", "Mid" };
    championRoles["Nunu et Willump"] = { "Jungle", "Support" };
    championRoles["Olaf"] = { "Top", "Jungle" };
    championRoles["Orianna"] = { "Mid" };
    championRoles["Ornn"] = { "Top" };
    championRoles["Pantheon"] = { "Top", "Mid" };
    championRoles["Poppy"] = { "Top", "Jungle" };
    championRoles["Pyke"] = { "Support" };
    championRoles["Qiyana"] = { "Mid" };
    championRoles["Quinn"] = { "Top", "ADC" };
    championRoles["Rakan"] = { "Support" };
    championRoles["Rammus"] = { "Jungle", "Support" };
    championRoles["RekSai"] = { "Jungle" };
    championRoles["Rell"] = { "Support" };
    championRoles["Renata Glasc"] = { "Support" };
    championRoles["Renekton"] = { "Top" };
    championRoles["Rengar"] = { "Top", "Jungle" };
    championRoles["Riven"] = { "Top" };
    championRoles["Rumble"] = { "Top", "Mid" };
    championRoles["Ryze"] = { "Mid", "Top" };
    championRoles["Samira"] = { "ADC" };
    championRoles["Sejuani"] = { "Jungle" };
    championRoles["Senna"] = { "ADC", "Support" };
    championRoles["Séraphine"] = { "Mid", "Support" };
    championRoles["Sett"] = { "Top", "Support" };
    championRoles["Shaco"] = { "Jungle" };
    championRoles["Shen"] = { "Top", "Support" };
    championRoles["Shyvana"] = { "Jungle" };
    championRoles["Singed"] = { "Top" };
    championRoles["Sion"] = { "Top", "Mid" };
    championRoles["Sivir"] = { "ADC" };
    championRoles["Skarner"] = { "Jungle" };
    championRoles["Sona"] = { "Support" };
    championRoles["Soraka"] = { "Support" };
    championRoles["Swain"] = { "Mid", "Support" };
    championRoles["Sylas"] = { "Mid", "Top" };
    championRoles["Syndra"] = { "Mid" };
    championRoles["Tahm Kench"] = { "Support", "Top" };
    championRoles["Taliyah"] = { "Jungle", "Mid" };
    championRoles["Talon"] = { "Mid" };
    championRoles["Taric"] = { "Support" };
    championRoles["Teemo"] = { "Top", "Mid" };
    championRoles["Thresh"] = { "Support" };
    championRoles["Tristana"] = { "ADC", "Mid" };
    championRoles["Trundle"] = { "Top", "Jungle" };
    championRoles["Tryndamere"] = { "Top" };
    championRoles["Twisted Fate"] = { "Mid" };
    championRoles["Twitch"] = { "ADC", "Jungle" };
    championRoles["Udyr"] = { "Jungle" };
    championRoles["Urgot"] = { "Top" };
    championRoles["Varus"] = { "ADC", "Mid" };
    championRoles["Vayne"] = { "ADC" };
    championRoles["Veigar"] = { "Mid", "Support" };
    championRoles["Vel'Koz"] = { "Support", "Mid" };
    championRoles["Vex"] = { "Mid" };
    championRoles["Vi"] = { "Jungle" };
    championRoles["Viego"] = { "Jungle", "Top" };
    championRoles["Viktor"] = { "Mid" };
    championRoles["Vladimir"] = { "Top", "Mid" };
    championRoles["Volibear"] = { "Top", "Jungle" };
    championRoles["Warwick"] = { "Jungle" };
    championRoles["Wukong"] = { "Top", "Jungle" };
    championRoles["Xayah"] = { "ADC" };
    championRoles["Xerath"] = { "Mid", "Support" };
    championRoles["XinZhao"] = { "Jungle" };
    championRoles["Yasuo"] = { "Mid", "Top" };
    championRoles["Yone"] = { "Mid" };
    championRoles["Yorick"] = { "Top" };
    championRoles["Yuumi"] = { "Support" };
    championRoles["Zac"] = { "Jungle" };
    championRoles["Zed"] = { "Mid" };
    championRoles["Zeri"] = { "Support" };
    championRoles["Ziggs"] = { "Mid", "ADC" };
    championRoles["Zilean"] = { "Support", "Mid" };
    championRoles["Zoe"] = { "Mid" };
    championRoles["Zyra"] = { "Support", "Mid" };
}
std::vector<std::string> getRoles(const std::string& championName) {
    // Récupère les rôles d'un champion à partir de son nom
    if (championRoles.count(championName) > 0) {
        return championRoles[championName];
    }
    else {
        return {};
    }
}
bool isCounter(const std::string& enemyChampion) {
    // Vérifie si un champion donné est un counter de Cassio
    if (enemyChampion == "Akali" || enemyChampion == "LeBlanc" || enemyChampion == "Orianna" || enemyChampion == "Qiyanna" || enemyChampion == "Syndra" || enemyChampion == "Talon" || enemyChampion == "Vel'Koz" || enemyChampion == "Xerath") {
        return true;
    }
    else {
        return false;
    }
}
void printCounterMethods(const std::string& enemyChampion) {
    // Affiche les méthodes pour battre un champion donné
    if (enemyChampion == "Ahri") {
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        std::cout << "Ahri est un champion AP (ap 69% || ad 8%) " << std::endl;
        

        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        std::cout << "Passif = Après avoir tué 9 sbire/monstre, Ahri récup des pv Après avoir participé à l'élimination d'un champion Ahri récup encore plus de pv" << std::endl;
        std::cout << "Q = Orbe 7s" << std::endl;
        std::cout << "W = 3 boules 9/8/7/6/5s" << std::endl;
        std::cout << "E = Charme (stuns) 14s" << std::endl;
        std::cout << "R = 3 dash 130/105/80s" << std::endl;
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        std::cout << "Matchup even. Cassio à un avantage en 1v1, mais un désavantage face aux ganks. Ahri a un combo très fort au level 2 et à une kill pressure au niveau 6. Son Q à un cd de 7s et est son principal moyen de clear une wave. Son W a un cd de 9s et n'infligent pas bcp de dégâts, mais lui donne un bonus de move speed. La principal menace vient du E qui à un cd de 12s durant le charme toute ses capacité infligé sur vous fait +20% de dégat. Son ult est 3 dash espacé de 1s minimum et max 10s PEUT ÊTRE CANCEL AVEC LA FLAQUE" << std::endl;
        std::cout << "Prendre de la mr et de la vie est utile " << std::endl;
        std::cout << "Summoners : Flash/Tp/Cleanse " << std::endl;
    }
    else if (enemyChampion == "Akali") {

        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        std::cout << "Akali est un champion AP (ap 90% || ad 7%) " << std::endl;
        

        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        std::cout << "Passif = Blesser un champion avec une compétence crée un cercle autour de lui. Quitter ce cercle renforce la prochaine attaque D'Akali en augmentant sa porté et ses dégâts. " << std::endl;
        std::cout << "Q = 3 dagues 1.5s " << std::endl;
        std::cout << "W = Smoke 20s " << std::endl;
        std::cout << "E = Shuriken hit = dash 16/14.5/13/11.5/10s" << std::endl;
        std::cout << "R = Dash 100/80/60s " << std::endl;
       

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        std::cout << "Matchup légèrement favorable à Akali. Elle est une menace lvl 1 mais à une kill pressure au niveau 6.  Sa vitesse de déplacement est augmenté lorsque qu'elle vous touche et en restant à une range de 500 elle obtient aussi un bonus dans sa smoke (son W).  Lors des combats, soyez patient avec vos Q ; utilisez votre E et attaquez en auto-attaque ou marchez simplement jusqu'à ce que vous puissiez toucher votre Q. Sa principale source de dégat avant son lvl 6 provient de son Q qui à un cd de 1.5s mais qui est limité par son energie, Son W (sa smoke) à un cd de 20set dure 5s, Sa deuxième utilisation de E la fait vous faire face et elle atterrit devant vous, mais pendant qu'elle est en l'air, elle peut utiliser son ultime pour passer à travers vous, utiliser Flash, Chronomètre/Zhonya et son sort W. Par conséquent, vous pouvez utiliser votre ultime pour un étourdissement garanti lorsque ses compétences sont toutes en temps de recharge (son sort W la rendra simplement invisible, vous ne pourrez donc pas lui infliger de dégâts après coup, mais cela peut encore être bénéfique pour vous selon la situation). Utilisez votre sort W sur vous-même si vous ne pouvez pas utiliser votre ultime. Si vous n'avez pas votre sort W, utilisez votre Q. Si vous n'avez pas votre Q, utilisez E en auto-attaque E pendant qu'elle est en l'air pour activer   " << std::endl;
        std::cout << "Prendre de la mr en cas de problème " << std::endl;
        std::cout << "Summoners : Flash/Exhaust/Tp " << std::endl;
    }
    else if (enemyChampion == "Anivia") {

        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        std::cout << "Anivia est un champion AP (ap 88% || ad 7%) " << std::endl;
        

        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        std::cout << "Passif =  Quand elle subit des dégâts mortels, Anivia se transforme en oeuf et revient à la vie avec tous ses pv. " << std::endl;
        std::cout << "Q = Oeuf (stuns) 12/11/10/9/8s" << std::endl;
        std::cout << "W = Wall 17s" << std::endl;
        std::cout << "E = Jet de glace 4s" << std::endl;
        std::cout << "R = Cercle de glace 4/3/2s" << std::endl;
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        std::cout << "Matchup even. Cassio légèrement plus forte pre lvl 6 mais manque de mana pour tuer anivia ET son oeuf POST 6 les 2 ont des opportunité de kill égal de gagner les trades. Ne pas gaspiller du mana lorsque son passif est entrain de se recharger (4minutes), Sa principale menace est son sort Q avec un temps de recharge de 10 secondes qui se déplace lentement, donc privilégiez l'esquive. Son W avec un temps de recharge de 17 secondes peut être utilisé pour bloquer votre chemin ou même vous pousser dans son sort Q ou son ultime. Si elle peut enchaîner avec ces compétences, ne vous approchez pas d'elle à moins d'avoir touché votre Q. Son sort E avec un temps de recharge de 4 secondes ne fait pas beaucoup de dégâts à moins d'être touché par son Q ou son ultime en taille réelle, et il est surpassé en portée (650) par toutes vos compétences. Son ultime avec un temps de recharge de 6 à 1 seconde s'étend et devient plus puissant pendant 1,5 seconde, mais il consomme beaucoup de mana. Elle en a besoin pour infliger la plupart de ses dégâts et doit également rester à proximité pour le canaliser, donc si vous pouvez lui infliger votre poison et surtout étourdir avec votre ultime (ce qui annule son ultime), vous pouvez toujours riposter.   " << std::endl;
        std::cout << "Prendre de la mr " << std::endl;
        std::cout << "Summoners : Flash/Tp/Cleanse " << std::endl;
    }
    else if (enemyChampion == "Annie") {
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        std::cout << "\033[1;34m";
        std::cout << "Annie est un champion AP (ap 91% || ad 4%) " << std::endl;
        std::cout << "\033[0m";

        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        std::cout << "Passif = (stuns) Après qu'Annie est utilisé 4 compétances, sa prochaine compétance offensive étourdit sa cible. Annie commence la partie et réapparait avec Pyromanie disponible. " << std::endl;
        std::cout << "Q = Boule de feu 4s " << std::endl;
        std::cout << "W = Cone de flamme 8s" << std::endl;
        std::cout << "E = Bouclier (Thorns) 12/11.5/11/10.5/10s" << std::endl;
        std::cout << "R = Ours 130/115/100s" << std::endl;
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        std::cout << "Matchup Even, Cassio est meilleur en 1v1 à tout lvl, mais Annie à de meilleur setup de gank. Après avoir lancé 4 sorts, elle aura une spirale blanche autour d'elle, et sa prochaine compétence stunra. son Q a un cd de 4s (réduit de moitié si elle tue un sbire et son W à un cd de 8s. Vos compétances on une meilleur range que ces dernières. Elle peut cependant se rapprocher rapidement avec son E qui a un cd de 14s et lui confère un bonus de move speed. Son ult est sa principal menace car il inflige des dégat explosif et devient plus ort si Annie meurt. Vous devez essayer de combattre seulement quand son ulti est en cd jusqu'a  être assez resistant, Toujours utiliser votre Q hors de sa porté pour poke un peu et essayer de lui faire utilisé ses spells " << std::endl;
        std::cout << "Prendre de la mr pour tanker son ult ainsi que de la vie " << std::endl;
        std::cout << "Summoners : Flash/Tp/Barrier " << std::endl;

    }

    else if (enemyChampion == "AurelionSol") {

        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        std::cout << "Aurelion Sol est un champion AP (ap 95% || ad 1%) " << std::endl;
        
       
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        std::cout << "Passif = Les compétances qui blessent des ennemis lui occtroit de la poussière d'étoile, laquelle améliore définitivement chacune de ses compétances (exemple : durée du r plus long)  " << std::endl;
        std::cout << "Q = Souffle de lumière 3s " << std::endl;
        std::cout << "W = Vol astral 22/20.5/19/17.5/16s " << std::endl;
        std::cout << "E = Trou noir 12s" << std::endl;
        std::cout << "R = Comète frappant le sol (stuns) 120/110/100s " << std::endl;
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        std::cout << "Matchup even Aurelion Sol est plus fort pre 6 et à une priorité de wave et de roaming. Dès que cassio à des items elle devient plus forte en 1v1  " << std::endl;
        std::cout << "ATTENTION CES CONSEILS SONT PEUT ÊTRE ÉRONNÉ DÛ AU FAIT QUE AURELION SOL A ÉTÉ REWORK" << std::endl;

    }

    else if (enemyChampion == "Azir") {

        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        std::cout << "Azir est un champion AP (ap 96% || ad 2%) " << std::endl;
        


        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        std::cout << "Passif = Azir peut invoquer le Disque solaire depuis les ruines des tourelles ennemies ou alliées 90s"  << std::endl;
        std::cout << "Q = Envoie de soldat 12/10.5/9/7.5/6s " << std::endl;
        std::cout << "W = Spawn de soldats 1.5s " << std::endl;
        std::cout << "E =Dash sur l'un de ses soldat + shield 22/20.5/19/17.5/16s " << std::endl;
        std::cout << "R = Mur de solats 120/105/90s  " << std::endl;
       
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        std::cout << "Matchup even azir à l'avantage pré 6 puis les deux côtéon des opportunités égales de remporter les trades. Azir est fort dans les trades courts et cassio plus forte lors des trades prolongées. Son Q vous surpassent légèrement en porté Ses soldats sont sa source de DPS, mais ils n'ont qu'une portée de 500 et sont moins puissants que le DPS de Cassiopeia. Il peut stacker 2 soldats à la fois et les soldats durent 10s sauf s'ils sont près de votre tower (5s) ou hors de sa porté (0s) S'il utilise 2 soldats en même temps, il ne peut les repositionner qu'avec son sort Q, ce qui signifie qu'il manquera de DPS une fois que vous aurez esquivé sa portée de soldats.Son sort E avec un temps de recharge de 19 secondes lui permet seulement de se déplacer vers ses soldats, mais il peut déplacer ses soldats pendant son utilisation avec son sort Q. Il peut l'utiliser, avec éventuellement Flash, pour vous atteindre de loin (la distance complète est littéralement la moitié de la voie) pour son ultime avec une portée de 250. S'il n'a pas de soldats stockés, il n'a pas d'échappatoire. Si Azir se déplace vers vous avec son sort E et n'a pas son sort Q, vous pouvez utiliser votre ultime pour un étourdissement garanti. S'il a son sort Q, utiliser votre ultime le forcera à utiliser son sort Q ou Flash pour éviter votre étourdissement, ce qui peut vous maintenir en sécurité." << std::endl;
        std::cout << "S'il utilise E -> Q pour se déplacer vers vous alors qu'il a son ultime, vous pouvez utiliser votre sort W sur vous-même -> Flash en arrière pour le maintenir immobile (il ne peut pas Flash après vous tant qu'il a encore son ultime disponible) et éviter son sort Q, ses soldats, son sort E et éventuellement même son ultime." << std::endl;
        std::cout << "Summoners : Flash/Tp/Exhaust " << std::endl;

    }

    else if (enemyChampion == "Cho'Gath") {

        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        std::cout << "Cho'Gath est un champion AP (ap 63% || ad 19%) " << std::endl;
       


        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        std::cout << "Passif = Lorsque Cho'Gath élimine une unité, il regagne des PV et du mana. Le nombre de pv et point mana réstaurés augmente avec le niveau de Cho'Gath. " << std::endl;
        std::cout << "Q = Rond qui (stuns) 6s " << std::endl;
        std::cout << "W = Cri en forme de cone (mute) 13/12/11/10/9s " << std::endl;
        std::cout << "E = Lancer de pique (slow) 8/7/6/5/4s " << std::endl;
        std::cout << "R = Devore unité enemi si kill = Cho'Gath grandit et pv max augmente 80/70/60s " << std::endl;
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        std::cout << "Matchup légèrement en faveur de cassio. Cho'Gath a du mal a Last hit et à trade en même temps, mais il peut remporter les trades et finir par vous kill au lvl 6 s'il touche ses spells. Ne pas faire de trade a moins de gagner car son passif lui permet de rattraper son manque de trade, il est important de l'emêcher de last hit. Sa principale menace est son Q c'est sa seul compétance qui n'est pas surpassé en porté par les spells de cassio. Son W est surpassé par tout les spells de cassio mais il réduit au silence (mute) donc permet juste d'auto attack et de se déplacé durant cette période (1.6 à 2s) à moins d'avoir une cleanse. Son E renforce ses 3 prochaines attaques de base et passe à travers les sbires, donc évitez de vous tenir en ligne entre lui et vos sbires. Son R inflige beaucoup de dégat Brut mais n'a q'une porté de 175, il perd beaucoup de kill preassure lorsque son ulti est en cd. " << std::endl;
        std::cout << "Prendre de la mr pour tanker son ult ainsi que de la vie un Banshee’s Veil  peut bloquer une grande partie de ses dégats un Rylai est efficace pour garder ses distances par rapport à son E.  " << std::endl;
        std::cout << "Summoners : Flash/Barrier/Tp/Ghost/Cleanse" << std::endl;
    }

    else if (enemyChampion == "Corki") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Corki est un champion AP (ap 84% || ad 12%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Un pourcentage des dégats des attaques de base de Corki est converti en dégâts maguiques A certains moments, Corki peut récuperer le Paqut dans sa base ce qui lui octroie un bonus de vitesse de deplacement et une version amélioré de W. 300s  " << std::endl;
    std::cout << "Q = Bombe (révèle unité dans la zone de la bombe) 8s " << std::endl;
    std::cout << "W = Laché aérien + trainé de feu 20/19/18/17/16s  " << std::endl;
    std::cout << "E = Mitrailleuse 16s " << std::endl;
    std::cout << "R = Missile 1/3 est une grosse bertha qui inflige plus de damage 12/11/10s " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup en favorabilité de cassio. Cassio a des DPS  légèrement meilleur et un avantagee, terme de contrôles, mais Corki a un bon potentiel de roaming avec son passif. Vous puvez remporter à la fois les trades court et les trades prolongés en fonction des objets et du nombre de compétences touchées par chacun. Son paquet dure 1min et lui confère un ralentissement de 90% ainsi que beaucoup de dégâts, donc évitez de vous battre contre lui lorsqu'il à son passif à moins d'être beaucoup plus fort. Son Q ne fait pas trop de damage tant qu'il n'a pas pris de lvl à évité quand même a moins de faire un très bon trade. Son W est un dash qui inflige un peu de dégat à son passage, lorsqu'il ne la pas corki manque d'échapatoire. Son E inflige un peu de dégat et réduit les résistances plates mais est surpassé en porté par tous vos spells Son R inflige des dégats de zone, donc ne vous tenez pas trop près des sbires Chaque 3e missille inflige des dégats doubles et a un rayon d'explosion plus important. " << std::endl;
    std::cout << "Prendre de la mr " << std::endl;
    std::cout << "Summoners : Flash/Tp/Ignite" << std::endl;

    }

    else if (enemyChampion == "Diana") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Diana est un champion AP (ap 82% || ad 12%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Toutes les 3 autos l'auto devient plus large et frappe les enemies proche et leur inflige des dégâts magiques suplémentaire. Après avoir lancé une compétance Dianna augmente son attack speed pour ses 3 prochaines autos  " << std::endl;
    std::cout << "Q = Vague incurvé 8/7.5/7/6.5/6s  " << std::endl;
    std::cout << "W = Shield + 3 boule autour qui inflige des dégats et disparaisse quand elles sont touché au corps à corps (comme l'ancien AurelionSol) 15/13.5/12/10.5/9s " << std::endl;
    std::cout << "E = Dash (sans cd si touché par son Q) 22/20/18/16/14s " << std::endl;
    std::cout << "R = Attire tout les ennemies puis les slows + damage 100/90/80s " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup légèrement en faveur de cassio. Cassio peut harceler en Laning phase a partir du lvl 2. Diana obtient ses combos aux lvl 3 et 6. Faites attentions a ses autos Elles infligent pas mal de dégâts pour un champion AP en raison de son attack speed et de son passif sur la dernière attaque. A moins qu'elle ne soit très feed ou que vous soyez low hp son potentiel de all in vient du fait de toucher son Q spell pour reset son E. Tant que son Q est en cd Diana sera beaucoup moins menacante. Votre Q supasse légèrement la porté de son E vous pouvez donc Q max range sans trop prendre de risque. Dina possède un shield qui a un cd de 15s il n'est pas worth de lui mettre des damages durant le shield si vous avez peu de mana. Elle peut être stuns durant son DASH (E). Il faut faire très attention a son ult si vous avez peu de pv car elle peut le prolonger avec R --> Flash Les dégâts de son ultime ont un délai d'1 seconde et sont infligés dans un cercle autour d'elle, vous pouvez donc Flasher pour vous en échapper.Si vous voulez la tuer après le niveau 6 alors qu'elle représente une menace pour vous, vous devriez utiliser votre sort W -> R. Cela fait en sorte que si elle utilise son sort Q/E vers vous, elle est étourdie, et si elle ne le fait pas, elle est ralentie et immobilisée.La parade pour elle est de Flasher par-dessus votre sort W, d'utiliser son sort R, puis de vous traverser avec son sort E, mais cela est mécaniquement difficile et représente un risque important pour elle car elle utiliserait essentiellement Flash uniquement pour éviter votre sort W sans savoir que votre ultime serait déclenché immédiatement après (si vous n'utilisez pas immédiatement votre ultime après votre sort W, vous avez alors une chance de l'utiliser sur elle lorsqu'elle utilise son sort E après avoir Flashé). L'Exhaust peut aider à kite et à atternuer une grande partie des damages de Diana   " << std::endl;
    std::cout << "Predre de la mr en cas de lose" << std::endl;
    std::cout << "Summoners : Flahs/Exhaust/Tp" << std::endl;

    }

    else if (enemyChampion == "Ekko") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Ekko est un champion AP (ap 82% || ad 11%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Toutes les 3 autos / spells sur la même cible Ekko inflige des dégats ap supplémentaire, si la cible est un champion il gagne en plus un bref bonus de move speed. " << std::endl;
    std::cout << "Q = Grenade (slows) 9/8.5/8/7.5/7s " << std::endl;
    std::cout << "W = Gros rond au sol (slows mais si ekko rentre dans le rond cela stuns l'ennemie et obtiens un shield.)  22/20/18/16/14s  " << std::endl;
    std::cout << "E = Dash 9/8.5/8/7.5/7s" << std::endl;
    std::cout << "R = Retour en arrière (impossible a ciblé durant l'ult) si ennemie proche de la zone d'arrivé = gros dégats. 110/80/50s" << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup légèrement en faveur de Cassio. Cassio met un peu de temps à pouvoir tuer Ekko de manière fiable a moins qu'elle ne prenne ignite ou ne build une oblivion orb (anti heal). Son passif lui donne un boost de move speed lorsqu'il touche un champion avec 3 compétences de dégâts/attaques de base. Son Q a un cd de 9 a 7 seconde ralentit après avoir atteint 700 unitées il est donc plus facile de dodge si vous vous positionnez autour de cettre porté ou plus loin. Son W est une partie essentiel de son combo car il lui donne un shield et vous etourdit si vous êtes à l'interieur. Il montre ou il atterira une seconde en avance donc concentrez vous sur le fait de rester en dehors vous pouvez utiliser la flaque ou l'ult pour l'empêcher de rentrer à l'interieur. Son E (dash) dépasse en porté tout vos spells Sa 2e ruée est ciblée, il ne peut donc pas l'utiliser s'il n'y a rien dans une portée de 425 ; s'il peut l'utiliser, alors gardez votre poison pour après. Lorsqu'il est en temps de recharge, il est très vulnérable. Vous pouvez essayer de lancer vos sorts Q à portée maximale et il ne pourra pas vous atteindre à moins d'avoir une vitesse de déplacement beaucoup plus élevée.  Si vous avez suffisamment de mana et votre sort W, vous pouvez le laisser vous E et remporter le trade. Si l'une de ses compétences de base est en temps de recharge, vous pouvez l'auto-attaquer et réserver le poison pour après qu'il ait utilisé ses deux E. Lorsqu'il a son ultime, faites attention à son image qui montre toujours où il était il y a 4 secondes. S'il est près de son emplacement actuel, vous pouvez utiliser votre sort W ou votre ultime pour l'empêcher d'utiliser son ultime ou le suivre même s'il l'utilise. S'il est loin, vous devriez réserver votre sort W et votre ultime, sauf s'ils sont nécessaires, jusqu'à ce que vous soyez prêt à cibler l'endroit où il utilise son ultime." << std::endl;
    std::cout << "De la mr et de la vie utiliser Oblivion Orb surtout si il a des corrupting Pots/ si sa team a de nombreux healer. Le Rylai est efficace pour vous eloigner de sa porté et minimiser ses augmentations de move speeds.L'Everfrost peut aider au burst et le maintenir immobilisé lorsqu'il utilise son E pour entrer, et l'empêche d'utiliser son ultime. " << std::endl;
    std::cout << "Summoners : Flash/Tp/Exhaust/Ignite/Barrier" << std::endl;



    }
    else if (enemyChampion == "Fizz") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Fizz est un champion AP (ap 82% || ad 13%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Fizz peut traverser les unités et profite d'un montant fixe de réduction de damage contre toutes les sources de dégats. " << std::endl;
    std::cout << "Q = Dash traversant 8/7.5/7/6.5/6s " << std::endl;
    std::cout << "W = Saignement (marque au dessus de votre champion) 7/6.5/6/5.5/5s  " << std::endl;
    std::cout << "E = Acrobatie (2 saut max soit retomber et frapper soit 2eme saut) 16/14/12/10/8s " << std::endl;
    std::cout << "R = Requin (slow + stuns) 100/85/70s" << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup even Fizz obtiens son combo de all in au lvl 3 et 6 Cassio peut intimider Fizz et contrôler la voie au lvl 1 et 2 mais est toujours plus forte jusqu'au lvl 6. Après le lvl 6 elle peut le battre en 1v1 mais ses combots avec son ult et les ganks peuvent être dangereux sauf si Cassio est sous une tour et reçois de l'aide. Son passif lui permet de réduire ses dégats brut en passant par 4 ticks ce qui est très fort face à cassio car elle est très orienté dps. Son Q est surpassé en porté par tout vos spells (vous pouvez viser l'endroit ou il atterira). Son sort W l'aide à farmer en augmentant sa portée de 50 et en ajoutant un peu de dégâts. Normalement, il a un temps de recharge de 7 à 5 secondes, mais il est réduit à 1 seconde et la plupart du mana est remboursé lorsque les ennemis sont tués par la première attaque.Son sort E avec un temps de recharge de 16 à 10 secondes est la compétence la plus importante autour de laquelle vous devez jouer. Il n'a qu'une portée totale de 600, mais Flash peut être utilisé pour l'augmenter. Il confère également l'impossibilité d'être ciblé, ce qu'il peut utiliser pour éviter d'être Exhaust ou ult. Son ult est sa source principale de Kill Preassure . Si Fizz lance son ultime de loin, utilisez votre sort W à portée maximale pour l'empêcher de vous atteindre ou le forcer à utiliser son E plus tôt ; vous pouvez utiliser votre ultime pendant qu'il est dans votre sort W, Il peut obtenir un ultime plus fiable en utilisant son sort Q à travers un sbire et en ultimant de plus près, auquel cas vous devriez réserver vos compétences pour après qu'il ait utilisé son E à moins que vous ne les utilisiez sur son coéquipier qui suit. Essayez de placer des Q à portée maximale car sa seule façon de farmer à distance ou de vous atteindre est d'utiliser ses ruées, son sort E étant susceptible d'aider à pousser la wave vers vous. S'il n'utilise pas la 2e utilisation de son sort E plus tôt, vous pouvez chronométrer votre ultime dès qu'il atterrit pour un étourdissement garanti s'il E vers vous. Vous pouvez également empoisonner l'endroit où il atterrira, mais souvenez-vous qu'il peut Flasher pendant son E. " << std::endl;
    std::cout << " Vous pouvez utiliser votre sort W -> Flash ou votre ultime R -> Flash vers l'arrière lorsque Fizz utilise son sort Q ou E vers vous." << std::endl;
    std::cout << "Item : Verdant Barrier est très efficace si vous avez des difficultés contre lui après le lvl 6. La mr et la santé sont deux options efficaces. Le Zhonya permet d'eviter son ult, son q, son e.";
    std::cout << "Flash/Barrier/Tp" << std::endl;


    }

    else if (enemyChampion == "Galio") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Galio est un champion AP (ap 96% || ad 2%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Toutes les quelques secondes, la prochaine auto de Galio inflige des dégat magiques suplémentaire sur la zone. 5s" << std::endl;
    std::cout << "Q = Convergence de tornade 12/11.5/11/10.5/10s  " << std::endl;
    std::cout << "W = Shield qui provoque des dégat si dans la zone 18/17.5/17/16.5/16s " << std::endl;
    std::cout << "E = Dash + (stuns) 18/17.5/17/16.5/16s " << std::endl;
    std::cout << "R = S'envol puis frappe comme panthéon 11/10/9/8/7s  " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup légèrement favorable à Cassio. Cassiopeia est plus forte en 1v1 mais Galio a une meilleur capacité a push ainsi qu'une capactié a roam au lvl 6. Vous pouvez harceler Galio pendant les lvl 1 et 2 sans subir beaucoup de représaille. Son Q est sa principale compétance pour faire des damages. Essayez de lui infliger des damages durant le cd de Q pour l'empêcher d'obtenir son bouclier qui limite les dégat magique. Pendant que son W est en cd votre priorité est de s'éloigné de lui pour eviter d'être dans la zone de son shield. Pour initier les trades/gank il à besoin de son E, il est donc vulnérable quand il est en cd. Son ult se canalise pendant 1.25s donc si vous êtes à proximité vous pouvez le cancel avec votre ult ou votrre w." << std::endl;
    std::cout << "Summoners : Flash/Tp/Exhaust" << std::endl;


    }

    else if (enemyChampion == "Heimerdinger") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Heimerdinger est un champion AP (ap 93% || ad 4%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Gagne de la vitesse de déplacement proche des tourelles alliées et des tourelles déployer par Heimerdinger" << std::endl;
    std::cout << "Q = Tourelle 1s " << std::endl;
    std::cout << "W = 5 Roquette sortant de sa tête 11/10/9/8/7s " << std::endl;
    std::cout << "E = Grenade (stuns touché et ralentit autour) 11s " << std::endl;
    std::cout << "R = Prochain spells après le R = spell améliorer (tourelle plus grosse ect...) 100/85/70s  " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup even cassiopeia est légèrement plus forte en 1v1 mais elle doit faire face a une lourde pression des tourelles qui permettent a Heimerdinger de push très facilement. Son passif lui confère 20% de move speed gardez cela à l'esprit quand vous placez des Q spells. Ses tourelles ont la même porté que vos auto et attaquent la cible la plus proche, mais elles vous cibleront si vous les endommagez ou si vous lui faites une auto ou un E. Leurs conons normaux ne font pas beaucoup de damage, mais lorsque la barre blanche se remplit (elle obtient des charges en touchant avec le W ou le E), elle tire un rayon esquivable. Son W  peut être bloqué par les sbires. Il inflige pas mal de dégâts, il n'est donc pas intéressant de le prendre à moins que vous puissiez obtenir un échange prolongé. Sa principal menace est son E. Si cela vous touche, les rayons de ses tourelles se chargent complètement et il est plus facile de vous toucher en raison des CC Si vous pouvez esquiver le centre même de son sort E, cela ne sera qu'un ralentissement au lieu d'un stuns. Son ultime renforce sa prochaine compétence de base. Son sort W et E ont essentiellement une portée et une largeur plus grandes. Son sort Q est beaucoup plus puissant ; il dure 8 secondes, est immunisé contre les CC et inflige beaucoup plus de dégâts que d'habitude. " << std::endl;
    std::cout << "Acheter de la mr en cas de problème" << std::endl;
    std::cout << "Summoners : Flash/Tp/Exhaust" << std::endl;


    }

    else if (enemyChampion == "Irelia") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Irelia est un champion AD (ap 29% || ad 69%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Quand Irelia frappe des ennemis avec ses compétences, elle gagne un bonus d'attack speed cumulable. Au maximum d'effet cumulés, elle gagne aussi des dégats à l'impact supplémentaires. " << std::endl;
    std::cout << "Q = Dash (regen de la vie a chaque dash/ si cible marqué/tué par le q = restet du cd du sort)  11/10/9/8/7s" << std::endl;
    std::cout << "W = Charge ses lames (subit moins de dégats durant la charge) et projette ses lames en avant (plus elle charge plus elle fait mal) 20/18/16/14/12s " << std::endl;
    std::cout << "E = Deux lames à placé  qui (stuns) 16/15/14/13/12s" << std::endl;
    std::cout << "R = Entour l'ennemie de lame si l'enemie est directement touché par l'ult = marqué (cd du dash reset) si le champion ennemies touche la lame = slow. 140/120/100s  " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup Even. Irelia est forte a partir du lvl 2 et peut également gagner les trades lvl 1 si elle accumule son passif. Son lvl 6 est plus fort en 1v1 jusqu'a ce que Cassio obtiennee ses items. Au lvl 1, vous ne devriez généralement pas infliger de damage a Ireliaou aux sbires à moins qu'elle ne commence à pusher vers vous, afin de pouvoir freeze la wave devant votre tour. Vous pouvez pusher si Irelia n'a pas d'avantage en summoners spells et que vous êtes confiant dans votre capacité a touché vos Q spells mais vous devez vous assurer qu'elle ne puisse pas accumuler librement son passif sur les sbires. Son Q est surpassé en porté par tout vos spells, mais son cd est réinitialisé si elle Q sur un sbire qui meurt ou est marqué par son E ou R. Elle se déplace à travers les sbires, donc s elle Q sur vous utilisez vos spells légèrement derrière vous. Si elle Q quoi que ce soit sans réinitialisation, elle sera alors très vulnérable jusqu'a ce que le cd du sort soit achevé. Lorsque vos sbires, en particulier les mages, on très peu d'hp préparez vous à Q ou W directement dessus(tout en restant hors de porté) Irelia devra soit renoncé au CS soit sera touché, peu importe si elle Q ou fait des autos. VOus pouvez enchainer des E et des autos si elle est proche de votre tour. Vous pouvez vous positionner sur le côté de la wave si vous êtes en sécurité contre les ganks. Cela vous permet de Flaque (W) à travers vos propre sbire afin de cacel le Q d'Irelia. Même si vous n'êtes pas à côté de votre wave vous voudrez généralement W sur vos sbires pour réduire la mobilité d'Irelia. Son W lui permet de prendre des CS et d'accumuler une charge passive plus rapidement que prévu. Il lui permet également de tanker d'avantage de damage venant des  tours ou des cs. Son E est sa principale menace a moins que son Q spells ne soit en cd. Si les deux sont dispo vous ne pouvez pas vous approcher d'Irelia ou des sbires auxquels elle peut Q à moins de lui faire un W ou d'être prèsde votre tour. Son R ajoute encore plus de menace, surtout parce qu'il est plus facile à toucher et que le ralentissement qui en résulte facilite également le touché de son E. La réinitialisation de son Q à partir de son E ou R sur Cassiopeia est extrêmement puissante car elle traverse les unités, de sorte que le Q et l'ult de Cassio manqueront (même si ils sont lancés au préalable) à moins qu'Irelia ne soit ralentie et en range du Q de Cassio (visez directement sur vous même) ou loin pour l'ult de cassio. Gardez vos distance par rapport à la porté de R--> Flash si cela constitue une menace pour vous. " << std::endl;
    std::cout << "Anneau de Doran permet de survivre à un all in, Le Rylai est particulièrement efficace car le Q d'Irelia est basé sur sa vmove speed. Vous pouvez rush le Rylai après la larme et le lost chapter (A REMPLACER PAR LE CATALYSEUR) si vous n'êtes pas en retard. L'armure n'est pas aussi efficace contre les dégats magique d'Irelia mais Zhonya est la meilleur option si vous craignez de vous faire dive. Considerez Oblivion Orb si elle a Conqueror et construit BotRk, surtout si son équipe a de la guérison. " << std::endl;
    std::cout << "Summoners : Flash/Barrier/Cleanse/Exhaust/Tp " << std::endl;
    }

    else if (enemyChampion == "Jayce") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Jayce est un champion AD (ap 18% || ad 80%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Quand Jayce change d'arme, il gagne un bonus de move speed pendant un court instant" << std::endl;
    std::cout << "Q = Orbe electrique (distance)/Saut(marteau) 16/14/12/10/8/6s " << std::endl;
    std::cout << "W = 3 tir electrique (distance)/Champ electrique(marteau) 10s " << std::endl;
    std::cout << "E = Portail foudroyant qui quand un Q passe à l'interieur le rend plus puissant(distance)/repousse un ennemie (marteau) 20/18/16/14/12/10s " << std::endl;
    std::cout << "R = Change l'arme (Marteau= + de dégat magique premiere attaque)( Canon = reduit mr/armure de l'ennemie) 6s " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup even. Jayce est légèrement plus fort avant le lvl 6 mais Cassio a les outils pour survivre et contrer ses aggressions. Jayce peut échanger entre distance et mélée toute les 6s cela lui donne de la move speed pendant 1.5s. Sa prochainne auto en passant en mélée lui confère un bonus de dégat ap et après être passé en mode distance il réduit la résistance de la cible pendant 5s. Cela ne lui permet pas de gagner les trades, mais il est plus sûr de trade après avoir attendu qu'il utilise son auto attack. Son Q en forme méle et en forme distance font des dégâts de zone lors ne restez pas trop près des sbires. Vous avez une portée supérieur à son Q en frome mêlé et vous pouvez flasher pour l'évité. Il peut utiliser son Q en forme distance puis flash, alors mefiez vous de ses repositionement rapide et ne comptez pas trop sur les CS pour vous protéger. Son W en forme distance fait attaquer très rapidement ses 3 prochaines autos vous ne pourrez pas gagner ce trad à moins de prendre un trade prolongé. Il peut infliger des damages significatif avec son E en forme distance sin son Q est également disponible. Restez derrière les sbires si vous voulez éciter les dégâts. Cherchez les trades en dehors de sa range ou des échanges prolongé, surtout lorsque son E en forme distance est en cd. Vous pouvez tenter des Q max range, ou ouvrir avec une flaque, lorsque Jayce est en forme distance. S'il est en forme mêlée et qu'il a son Q, vous devriez chercher a placer des Q max range ou vous pouvez aussi ult pour garantir un stuns lorsqu'il utilise son Q sur vous " << std::endl;
    std::cout << "Acheter de l'armure est très efficace contre Jayce, vous pouvez aussi Build un Seeker's Armguard (item armure juste avant le zhonya) si son Jungler est AD " << std::endl;
    std::cout << "Summoners : Flash/Barrier/Exhaust/Tp"<<std::endl;



    }

    else if (enemyChampion == "Kassadin") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Kassadin est un champion AP (ap 90% || ad 8%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Kassadin subit moins de dégâts magique et peut traverser les unités." << std::endl;
    std::cout << "Q = Orbe violette (damage+intteromp canalisation) + shield qui absorbe dégat ap. 10/9.5/9/8.5/8s " << std::endl;
    std::cout << "W = Lame puissante passif :(les autos inflige des dégats magique suplémentaire.) Active : (La prochaine auto inflige d'important dégat ap et lui rend du mana) 7s " << std::endl;
    std::cout << "E = Tire energie sous forme de cone(slow) 21/20/19/18/17s " << std::endl;
    std::cout << "R =Se tp sur l'ennemie chaque tp = + de damage. 5/3.5/2s  " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup légèrement plus favorable à Cassio. Cassio peut intimider Kassadin aux level 1 et 5. Une fois que Kassadin atteint le level 6 et retourne à la base, il devient beaucoup plus difficile pour Cassio de l'intimider, mais elle reste plus forte. Son passif lui permet de traverser les unités et de réduire les dégats magique de 15% Vous devez utiliser beaucop d'auto attack, pour le harceler en early game et vous aurez besoin de beaucoup de mana pour le mettre sous pression plus tard. Avant le lvl 6, sa seul façon de prendre des sbires à distances est d'utiliser son Q ou son E qui son deux compétance outrangé par tout votre kit de sort. Vous devriez forcer sur les trades avec lui pendant que son Q et son E son en cd. Vous pouvez également trade lorsqu'il ne sont pas en cd pour lui faire perdre des cs. Mais essayez de rester hors de porté de son E car le slow rendra plus difficile le désengagement à moins que vous ne prociez phase rush (PAS MON CAS) Son Ult est out rangé par toutes voc compétences. Si vous avez suffisament de mana et vos deux poisons, vous pouvez commencer par l'un d'entre eux (généralement Q) puis utiliser l'autre après qu'il est utiliser son ult. Si vous n'avez pas suffisament de mana, il vaut mieux se concentrer sur la wave ou attendre qu'il utilise son ult agressivement. Maintenez vos distances par rapport à la porté de son ult--> Fash " << std::endl;
    std::cout << "La mr et la santé sont tout deux très éfficaces. Everfrost peut aider à le maintenir immobile lorsqu'il ult, mais cela ne sera pas efficace à long terme contre lui si il obtient tenacité" << std::endl;
    std::cout << "Summoners : Flash/Barrier/Ignite/Tp" << std::endl;

    }

    else if (enemyChampion == "Katarina") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Katarina est un champion AP (ap 82% || ad 14%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Les cd des compétances de kaarina sont grandements réduit quand un champion qu'elle a blessé récemment meurt. Si katarina ramasse une dague, elle s'en sert pour frapper tous ses ennemis proches, infligeant des dégâts magiques. " << std::endl;
    std::cout << "Q = Lancer de dague (rebondit sur tout les ennemies proche) 11/10/9/8/7s " << std::endl;
    std::cout << "W = Dague sur postion (lance dague sur elle + bonus de move speed) 15/14/13/12/11s  " << std::endl;
    std::cout << "E = Teleportation (si c'est un ennemie = auto sinon elle frappe l'ennemie le plus proche) 14/12.5/11/9.5/8s " << std::endl;
    std::cout << "R = Tourne et envoie des dagues de partout (comme l'ult de samira sauf que ici cela n'empêche pas les spells de la toucher) 90/60/45s  " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup Légèrement en faveur de cassio. Cassiopeia neutralise Katarina a tout les stades de la partie, mais Katarina peut devenir trop puissante si elle est feed. Le lvl 2 de Katarina combinés à ses autos est très fort, mais vous pouvez la battre si vous touchez vos Q et utilisez E + auto. Sa seule forme de wave clear a distance est son Q cela signifie que vous pouvez la priver de CS pendant qu'il est en cd et si vous avez besoin de freeze la wave, elle la poussera vers vous avec ce sort. Eloignez vous de ses dagues (à moins que vous ne remportier le combat) et soyet prêt à utiliser votre poison lorsque Katarina utilise son E pour récuperer des dagues. Le cd de son E est fortement réduit lorsqu'elle ramasse une dague, mais elle aura un temps de recharge d'environ 3 à 2s en early game. La direction de son ult est basé sur sa direction avant de l'avoir lancé. Si elle est tourné, vous pouvez généralement échappé à son ult, mais si vous voulez la tuer ou obtenir un stuns garantit utiliser votre ult pour vous éloigner d'elle, puis utiliser votre Flash pour passer au dessus d'elle. Son R applique Grievous Wounds qui est un debuff réduisant de 40% le heal des ennemies " << std::endl;
    std::cout << "Prendre de la mr pet être utile" << std::endl;
    std::cout << "Summoners : Flash/Barrier/Exhaust/Ignite/Tp" << std::endl;


    }


    else if (enemyChampion == "LeBlanc") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "LeBlanc est un champion AP (ap 78% || ad 20%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Quand Leblanc tombe à moins de 40% de ses PV max, elle devient invisible pendant 1s et crée une image miroir qui n'inflige aucun damage et dure jusqu'a 8s   40s" << std::endl;
    std::cout << "Q = Sceau qui inflige dégat et qui marque ennemie pendant 3.5s (si cible blesser après avoir posé la marque = explosion du Sceau si le Sceau ou l'explosion tue la cible LeBlanc récup le cout en mana et réduit le cd du Q. 6s  " << std::endl;
    std::cout << "W = Dash (elle à 4s pour back à son point de départ (pas obligatoire)) 18/16/14/12/10s  " << std::endl;
    std::cout << "E = Lance une chaine si la chaine n'est pas brisé avant 1.5s = stuns + dégat. 14/13.25/12.5/11.75/11s " << std::endl;
    std::cout << "R = Leblanc imite un de ses sort de base. 50/40/30s  " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup légèrement favorable à LeBlanc. Cassiopeia peut win les trade 1v1, mais LeBlanc dispose d'excellente mise en place de gank et d'un bon suivi à partir du lvl 2, encore plus au lvl 3 et particulièrement au lvl 6. AU lvl 1, si vous ne craignez pas un gank lvl 2, vous pouvez pousser la wave vers la tour de LeBlanc en vous positionnant sur le côté de la wave. Si elle effectue son W sur vous, vous vous échanger de manière équitable un E+auto+E, et elle sera en situation de désavantage par la suite. Il est très important de freeze la wave après la première wave, à moins que vous ne craignez pas un gank. Vous pouvez empêcher LeBlanc de freeze la wave en utilisant votre Q et votre W si votre wave est suffisament stacké, ou en vous positionnant sur vos sbires de sorte à ce que LeBlanc doive les endomager avec son W (et aura peut être du mal a toucher son E) si elle veut combattre (ne faites pas cela si vous pouvez petre ganké). Son passif la rend invisible et crée un clone d'elle-même (qui ne fait pas de dégâts) lorsqu'elle tombe en dessous de 40% de santé, alors faites attention à ne pas vous engager trop profondément. Vous pouvez identifier laquelle est la vraie LeBlanc si vous lui avez infligé des dégâts sur la durée avant que son passif ne s'active, ou si elle vous inflige simplement des dégâts. Essayez de vous tenir hors de porté de son W mais vous remporterez toujours les duels en 1v1 si vous appliquez votre poison et vous éloignez de son E ou si vous egagez un trade prolongé. Elle peut se tp en arrière après 0.2s, donc ne gaspillez pas votre W ou votre ult; vous pouvez toujours utilisez votre W tôt et votre ult si elle est encore à l'intérieur de votre W. Lorsque son sort W est en cd, elle a du mal à éliminer les sbires et à echanger. Elle peut rendre son E impossible à esquiver ou obtenir une distance suplémentaire en faisant E + FLASH. Son ult imite  sont sort le plus récemment utilisé, elle peut donc utiliser son W deux fois pour eviter vos sorts ou couvrir une plus grande distance, ou vous maintenir pris au piège avec 2 E." << std::endl;
    std::cout << "Je recommande le choix de Rune Phase Rush si LeBlanc est compétente, car cela vous aidera à échapper à son E, et LeBlanc peut éviter les échanges prolongés." << std::endl;
    std::cout << " start popo de corruption car cela aide à soutenir et à riposter, et LeBlanc n'a pas une forte capacité à clear les waves. vous pouvez même identifier quelle LeBlanc est la vraie pendant sa phase passive si vous lui infligez des dégâts de brûlure auparavant. Les résistances magiques et les PV sont tous deux efficaces pour survivre à ses dégâts explosifs." << std::endl;
    std::cout << "Summoners : Flash/Barrier/Cleanse/Tp" << std::endl;

    }

    else if (enemyChampion == "Lissandra") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Lissandra est un champion AP (ap 90% || ad 6%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Lorsque q'un champion ennemie meurt a proximité de Lissandra, il se transforme en serviteur de glace. Les serviteurs de glace ralentissent les ennemis proche et, après un delai, le froid les faits exploser, infligeant des dégâts magiques aux cibles proches. " << std::endl;
    std::cout << "Q = Eclat de glace (envoie glace (traverse première cible et touches celles derrières mais moins de damages comme le Q de Zed)) 8/7/6/5/4s " << std::endl;
    std::cout << "W = Cercle de givre (stuns) les ennemis proches, et leurs infligents des damages.  12/11/10/9/8s" << std::endl;
    std::cout << "E = Main de glace trace un chemin qui fait des dégats et permet à Lissandra de se tp 24/21/18/15/12s   " << std::endl;
    std::cout << "R = Peut être utilisé sur elle même ou sur l'ennemie (elle même = devient inciblable + la soigne + slow) si champion directement = étourdit.  120/100/80s" << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup en faveur de Cassio. Cassiopeia est plus forte dès le lvl 1 et peut harceler son adversaire a partir du lvl 2 et au-delà, surtout lorsqu'elle obtient plus d'item. Le Q de Lissandra est sa principale menace en termes de dégâts, mais il ne fait toujours pas beaucoup de dégâts. Évitez de vous placer en ligne entre elle et vos sbires, car cela lui permettra d'étendre sa porté, mais elle reste quand même inférieur par rapport à votre Q. Son W n'est pas une grande menace, sauf pour mettre en place un gank. Il est à une porté inférieur de vos sorts et même de votre auto. Son E lui permet de se tp vers l'endroit où se trouve la griffe de glace, à moins qu'elle ne soit soumise à un CC intense (votre W l'empêche). Cela lui permet de se rapprocher pour les ganks, mais la vitesse de déplacement de la griffe est modéré, vous pouvez donc vous éloignez si vous n'êtes pas trop proche. Elle est très vulnérable pendant la durée de récupération de ce sort car elle ne peut échapper à votre portée ou vous atteindre qu'en utilisant un FLash. Son ult et un point and click et peut être utilisé sur vous pour vous étourdir pendant 1.5s. Faites attention à ne pas vous engager trop profondément, car elle peut l'utiliser sur elle-même pour se soigner et benéficier de 2.5s de stase(comme le Zhonya). Vous voudrez peut être rester en dehors ducercle de glace car il inflige des damages.  " << std::endl;
    std::cout << "Prendre de la mr peut permettre de tank le E" << std::endl;
    std::cout << "Summoners: Flash/Cleanse/Ignite/Tp" << std::endl;


    }

    else if (enemyChampion == "Lucian") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Lucian est un champion AD (ap 13% || ad 84%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Quand Lucian utilise une compétences, sa prochaine attaque devient un double tir. Quand Lucian est soigné par un allié, quand il reçoit un bouclier de la part d'un allié ou quand un champion ennemie proche est immobilisé, ses 2 prochaines attaques de base infligeronts des dégâts magique suplémentaires. " << std::endl;
    std::cout << "Q = Rayon droit qui transperce les cibles. 9/8/7/6/5s  " << std::endl;
    std::cout << "W = Tir qui explose en forme d'étoile marquant et révélant les enemis. Lucian augmente sa moovespeed si il attaque un ennemis marqué. 14/13/12/11/10s " << std::endl;
    std::cout << "E = Dash (le passif réduit le cd du E) 22/20/18/16/14s " << std::endl;
    std::cout << "R = Lucian tire plein de balle (comme hakshan mais pas ciblé sur une seul cible) 110/100/90s " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup even. Lucian est plus fort au lvl 1, puis les deux champions ont de chances égales de remporter les trades. Son Q passe a travers les CS, il faut donc eviter de s'alligner avec eux. Le E de Lucian voit son CD réduit de 1 seconde (2 contre les champions) à chaque fois que sa deuxième attaque passive attérit. C'est simplement un dash, donc si Lucian ne l'utilise pas pour esquiver votre poison, vous remportez le fight si vous n'êtes pas en retard. S'il a cette compétence disponible, essayez seulement de lancer vos  Q max range à moins d'etre en avance et d'avoir votre W. Son ult inflige beaucoup de damage si vous ne pouvez pas éviter les balles, ce que vous ne pouvez pas faire sans utiliser le flash si Lucian utilise son W cela lui donne un bonus de move speed s'il vous touche. Vous pouvez utiliser votre ult pour le cc à moins qu'il ne  l'annule." << std::endl;
    std::cout << "Prendre de l'armure en cas de problème + Zhonya pour éviter l'ult" << std::endl;
    std::cout << "Summoners : Flash/Barrier/Exhaust/Tp" << std::endl;

    }

    else if (enemyChampion == "Lux") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Lux est un champion AP (ap 89% || ad 6%) " << std::endl;
   


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif =Les compétences de Lux infligeant des dégâts chargent la cible en énergie pendant quelques secondes. La prochaine attaque de Lux embrase l'énergie, infligeant des dégâts magiques supplémentaires à la cible (en fonction du niveau de Lux)." << std::endl;
    std::cout << "Q = Sphere qui stuns et fait des damages  11s" << std::endl;
    std::cout << "W = Baton qui offre un shield aux alliées et à elle même les protégeant des damages. 14/13/12/11/10s" << std::endl;
    std::cout << "E = Cercle de lumière qui slow et qui peut être exploser 'plus lux attend pour l'exploser plus il fait de damage) 10/9.5/9/8.5/8s" << std::endl;
    std::cout << "R = Rayon cosmique traversant toute la map. (réduit la durée de son passif) 60/50/40s " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup en faveur de Cassiopeia. Lux a du mal à gérer à la fois la wave et les trades mais elle peut remporter les trades et finir par vous tuer après le lvl 6 si elle touche ses spells. Evitez les autos de Lux en early game. Plus Tard, vous remporterez les trades si elle s'approche de vous pour vous attaquer. Lorsque son Q est inactif, elle repésente une faible menace pour vous, SI elle touche son Q, elle peut garantir de toucher son ult à moins que vous ayez une Cleanse. N'essayez pas de lui faire des dégats lorsqu'elle à son shield atif à moins d'avoir suffisament de mana pour le briser. Son E est peu menacant, mais vous devriez quand même éviter le slow pour pouvir rester preès d'elle. Elle épuise rapidement son mana si elle l'utilise fréquemment. Son ult a une porté très longue et constitue la majorité de ses dégâts (il consomme et rapplique ses compétences passive), mais il a un temps de canalisation modéré, ce qui vous permet de l'esquiver à moins d'être sous CC" << std::endl;
    std::cout << "Astuce : Vous pouvez utiliser votre ultime puis Flasher sur le côté pendant qu'elle utilise son ultime pour garantir un stuns" << std::endl;
    std::cout << "Prendre de la mr peut être utile pour tank l'ult" << std::endl;
    std::cout << "Summoners : Flash/Barrier/Cleanse/Tp" << std::endl;

    }


    else if (enemyChampion == "Malzahar") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Malzahar est un champion AP (ap 96% || ad 3%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Quand il ne subit pas de dégâts ou de CC pendant un temps, Malzahar gagne une énorme réduction des dégâts et devient insensible aux CC. Cet effet perdure pendant un court instant après avoir subi des dégâts. 30/24/18/12s" << std::endl;
    std::cout << "Q = Deux boules formant un portail (damage magique + mute) 6s  " << std::endl;
    std::cout << "W = Araignée sbire de Malzahar 8s " << std::endl;
    std::cout << "E = Crée un bouclier autour de la cible, si la cible meurt le spell est automatiquement envoyé à l'ennemie le plus procheet Malzahar regen du mana. Les sbires du W son attiré par les ennemies affecté par le E. 15/13/11/9/7s" << std::endl;
    std::cout << "R = Cananalisation d'energie (+ crée un cercle au sol) et inflige des damages. 140/110/80s  " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup even. Malzahar est plus faible en 1v1 tout au long de la game, sauf s'il est trop feed, mais il a un bon wave clear et un bon setup pour sa team g^race à son ult. Faites tomber son passif (qui a un cd de 30/20s) avec n'importe quelle spells avant de l'engage dans un trade dès le début de game. Vous pouvez tuer ses sbires (son W) d'un seul coup avec une auto ou les éléminées avec Q + W ou Q+E. Vous les tuerez plus lentement avec seulement un Q spell ou seulement W. Avec Phase Rush vous gagnez les trade court car la plupart des damages proviennet de son W que vous pouvez éloigner avec phase rush. Avec Conqueror, vous gagnez les trades long tant que vous ne mourez pas à cause de son ult. Éloignez vous des sbires touché par son E, à moins que vous ne soyez prêt à encaisser les damages pour réduire son effet sur la vague de sbire. Son ult est un puissant CC qui prépare le terrain pour ses teamates ou amplifies les damages de son Q+W s'il les a déja lancé, mais il ne fait pas beacuop de damages par lui même. Vous pouvez utiliser votre ultime pour annuler son ultime si vous gardez vos distances. La portée de son ultime n'est que de 700, donc s'il s'approche dans cette zone, vous pouvez utiliser votre ultime pour annuler le sien, ou il subit une tonne de dégâts que vous pouvez éventuellement l'achever ou simplement vous éloigner de sa portée s'il se retourne.  " << std::endl;
    std::cout << "La mr pourrai être utile" << std::endl;
    std::cout << "Summoners : Flash/Barrier/Tp" << std::endl;

    }

    
    else if (enemyChampion == "Naafiri") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Naafiri est un champion AD (ap 0% || ad 95%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Naafiri fait apparaître des membres de la meute qui attaquent les cibles de ses attaques et de ses compétences. 25/20/15/10s " << std::endl;
    std::cout << "Q = Naafiri lance jusqu'à deux dagues. Si la cible saigne, cette compétence inflige des dégâts supplémentaires et applique un saignement bonus. Les membres de la meute bondissent pour attaquer les cibles touchées. 11/10/9/8/7s " << std::endl;
    std::cout << "W = (Dash) Naafiri et les membres de sa meute se ruent sur un ennemi, s'arrêtant au premier champion ennemi touché et lui infligeant des dégâts. 22/20/18/16/14s " << std::endl;
    std::cout << "E = (Dash en boule pour tomber sur l'ennemie) Naafiri se rue dans une direction et inflige des dégâts aux ennemis dans une zone autour d'elle. Les membres de la meute sont rappelés et entièrement soignés. 11/10.5s/10/9.5s/9s " << std::endl;
    std::cout << "R = Naafirifait apparaitre + de chien ce qui augmente sa move speed  + donne la vision dans une large zone + lui octroie un shield quand elle attaque un champion. Lors de la durée de la compétence, la première fois qu'elle tue un champion les effets sont reset. 120/110/100s  " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "" << std::endl;


    }
    
    
    
    
    else if (enemyChampion == "Neeko") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Neeko est un champion AP (ap 90% || ad 7%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Neeko peut prendre l'apparence d'un champion allié. Se faire blesser par un champion ennemi ou lancer un sort infligeant des dégâts met fin au déguisement. 6s " << std::endl;
    std::cout << "Q = Lance graine (comme bombe de heimer), la graine éclot une nouvelle fois si elle touche des champions ou si elle tue un ennemis 9/8.5/8/7.5/7s  " << std::endl;
    std::cout << "W = Clonage 16/15/14/13/12s " << std::endl;
    std::cout << "E = Tire projectile en spirale violet (traverse les ennemis) Si le projectile tue un ennemi ou traverse un champion, il augmente sa taille, sa vitesse et la durée de son immobilisation. 12/11.5/11/10.5/10s " << std::endl;
    std::cout << "R = Neeko bondit dans les airs. (grosse fleur au sol) Quand elle atterrit, les ennemis proches sont blessés et projetés dans les airs. La préparation ne se voit pas si Neeko est déguisée. 120/105/90s  " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup even. Neeko a un combo fort au lvl 2 et une kill preassuer au lvl 6. Son passif lui permet de se deguiser en ses teamates, mais le deguisement se brisera si vous lui infliger des damages ou si elle lance son Q ou E. Son Q inflige des damages suplémentaires dans la zone après un court délai s'il tue un sbire ou vous touche. Son W lui confère une invisibilité de 0.5s, un clone qui marche et de la move speed suplémentaire. Vous pouvez identifier lequel est le vrai en utilisant votre Q sur elle au préalable ou si le clone ne marche pas en ligne droite, et utiliser votre Q sur le clone vous donnera toujours de la vitesse de déplacement. Son E  n'est pas bloqué par les sbires, et devient même plus fort s'il traverse au moins un sbire. Elle est vulnérable lorsque cette compétence est en recharge, mais son W lui fournit tout de même une certaine sécurité. Son R est dépassé en portée (600) par toutes vos compétences. Elle peut utiliser Flash jusqu'à ce qu'elle saute en l'air, ce qui vous donne le temps de faire de même si nécessaire. " << std::endl;
    std::cout << "Prendre de la mr en cas de pépin" << std::endl;
    std::cout << "Summoners : Flash/Barrier/Cleanse/Tp" << std::endl;

    }

    else if (enemyChampion == "Orianna") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Orianna est un champion AP (ap 93% || ad 5%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Les attaques d'Orianna infligent des dégâts magiques supplémentaires. Plus Orianna attaque la même cible, plus les dégâts sont importants. " << std::endl;
    std::cout << "Q = Envoi de la sphère dans une zone (traverse tout les ennemis sur son passage en faisant moins de dégat à la cible suivante (comme le Q de Zed) puis reste à son point d'arriver). 6/5.25/4.5/3.75/3s " << std::endl;
    std::cout << "W = La sphère émet une impulsion infligeant des dégat de zone autour de la sphère 7s  " << std::endl;
    std::cout << "E = Orianna ordonne à sa sphère d'aller se fixer sur un champion allié pour lui octroyer un bouclier, infligeant des dégâts magiques aux ennemis sur son passage. La sphère augmente aussi l'armure et la résistance magique du champion sur lequel elle est fixée. 9s" << std::endl;
    std::cout << "R = Orianna ordonne à sa sphère d'émettre une onde de choc, infligeant des dégâts magiques et projetant les ennemis proches vers la sphère après un bref délai. 110/95/80s " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup en faveur de Orianna. Orianna à un léger avantage de porté sur Cassiopeia, mais pour la harceler elle doit s'approcher, ce qui la met à porté de représailles. Son Q  inflige moins de dégâts plus il traverse de vos sbires, donc essayez de vous positionner avec des sbires entre vous et sa balle si vous acceptez qu'elle vous inflige des damages. Si vous ne voulez pas qu'elle blessent vos CS privilégiez une distance entre vous et sa balle. Son W a un peu plus de portée que son Q, mais il coûte beaucoup de mana, donc si elle n'a pas beaucoup de sustain en mana, rester près de sa balle pendant que son Q est en recharge peut être acceptable, voire bon. Son E confère un bouclier et des résistances, donc évitez de commercer lorsqu'elle l'utilise à moins d'avoir beaucoup de mana. Pendant qu'il est en recharge, elle manque de défense, surtout si son Q est également en recharge ou loin de vous. Son ultime est sa principale menace qui minimise également votre capacité à l'atteindre. Il est lancé depuis l'emplacement de sa balle, donc c'est une autre raison de rester loin de sa balle. Vous pouvez Flash pour sortir de son ultime, mais vous serez alors plus vulnérable lorsque son prochain ultime sera disponible. Restez hors de portée de son R -> Flash si cela vous menace. Si elle lance R sur elle-même alors que vous n'êtes pas à portée, utilisez votre ultime pour un stuns garanti si elle Flash vers vous, ou utilisez Flash pour vous éloigner si nécessaire. Si elle vous ultime vers elle, vous pouvez lancer votre ultime pour qu'il parte et revienne vers sa balle." << std::endl;
    std::cout << "Les Potions corruptrices sont efficaces contre elle si vous avez du mal à commercer. La résistance magique et la santé sont toutes deux efficaces pour survivre à ses dégâts. " << std::endl;
    std::cout << "Flash/Tp/Barrier" << std::endl;

    }

    else if (enemyChampion == "Pantheon") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Pantheon est un champion AD (ap 4% || ad 92%) " << std::endl;
   


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Après un certain nombre de compétences ou d'attaques, la prochaine compétence de Pantheon est renforcée. " << std::endl;
    std::cout << "Q = Il lance sa lance et (traverse les unités) 11/10.25/9.5/8.75/8s  " << std::endl;
    std::cout << "W = Saut sur la cible (stuns) + damage. 13/12/11/10/9s " << std::endl;
    std::cout << "E = Shield + rafale de lance 22/21/20/19/18s  " << std::endl;
    std::cout << "R = Saute dans les Airs puis de rue sur l'ennemie (comme ult de Galio). 180/165/150s  " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup en faveur de Cassio, Cassio à un leger avantage en 1v1, surtout lorsqu'elle obtient des items, Cepandant, Pantheon à une forte capacité de all in et une certaine force pour roam, surtout avec un jungler AP. Son Q inflige des dégâts modérés qui sont augmentés si vous êtes en dessous de 20% de vos PV max. Si vous ne mourrez pas à cause de son Q, envisagez d'utiliser votre ultime pendant qu'il le canalise car il aura plus de difficulté à se retourner et il sera étourdi s'il lance sa lance. Sa principale menace est son W  surtout s'il a toutes ses charges passives, mais il est hors de portée (600) de toutes vos compétences. Avec toutes ses charges passives, il inflige des dégâts supplémentaires et compte comme 3 autos attack , ce qui déclenche sa rune principale. Pendant qu'il est en l'air, vous pouvez lancer Q ou W sur vous-même pour empoisonner, ou si c'est depuis la portée maximale, vous pouvez utiliser R pour un stuns garantit. Envisagez de flash pour vous éloigner pendant qu'il est en l'air pour éviter ses followup damage car il atterira la ou vous étiez précedemment. Son E lui donne une invulnérabilité aux dégâts autres que ceux des tours qui proviennent de l'endroit où se trouve son bouclier pendant 1,5 seconde ou jusqu'à ce qu'il l'annule. Vous pouvez utiliser votre ultime pour l'étourdir, mais cela n'annulera pas son E. Vous devriez essayer de vous éloigner sur le côté ou en diagonale pour éviter ses dégâts et peut-être le blesser. Son ultime se canalise pendant 2 secondes, donc si vous êtes à proximité, vous pouvez l'annuler avec votre W ou l'étourdir avec votre R. Votre W ne l'empêchera pas de lancer son W ou Flash immédiatement après avoir atterri s'il le prépare.    " << std::endl;
    std::cout << "Prendre de l'armure pourrait être judicieux" << std::endl;
    std::cout << "Summoners : Flash/Barrier/Exhaust/Tp" << std::endl;

    }


    else if (enemyChampion == "Qiyana") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Qiyana est un champion AD (ap 9% || ad 87%) " << std::endl;
   


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = La première compétence ou attaque de base de Qiyana contre un ennemi inflige des dégâts supplémentaires. " << std::endl;
    std::cout << "Q = Qiyana frappe avec son arme, infligeant des dégâts et un effet supplémentaire selon son élément. (Feuille = chemin invisible) (Terre = Lancer classique) (Glace = slow) 7s " << std::endl;
    std::cout << "W = Qiyana se rue vers la zone ciblée et enchante son arme avec un élément. Ses attaques et ses compétences infligent des dégâts supplémentaires quand son arme est enchantée. 7s  " << std::endl;
    std::cout << "E = Dash 11/10/9/8/7s " << std::endl;
    std::cout << "R =  Qiyana envoie une onde de choc qui provoque une explosion en touchant un élément, ce qui étourdit et blesse les ennemis proches. 120s " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup en faveur de Qiyana. Cassiopeia a un leer avantage en 1v1 mais Qiyana a un potentiel de roaming extrêment fort avec son ult, que Cassiopeia ne peut pas contester seul sans avance considérable. Qiyana devient forte a partir du lvl 3. Son Q  inflige des dégâts réduits après avoir traversé vos sbires. Sans élément, il est hors de portée (650) de toutes vos compétences. Avec un élément, il n'outrange que votre E (710). Son W doit être visé et à portée d'un mur, d'un buisson ou de la rivière, vous pouvez donc vous attendre à l'endroit où elle va se diriger, et elle ne peut même pas l'utiliser si elle est au centre de la voie. Elle change de couleur en fonction de l'élément qu'elle ramasse : vert pour l'invisibilité et la vitesse de déplacement, bleu pour une courte immobilisation et un ralentissement, et marron pour des dégâts supplémentaires lorsque vous êtes en dessous de 50 % de vos PV. Son E est une distance fixe, vous pouvez donc viser l'endroit où elle atterrira. Elle est considérablement plus faible lorsqu'il est en cours de recharge. Vous pouvez essayer de placer des Q max range lorsque vous avez suffisamment de mana et que vous n'êtes overextend (push comme un taré trop loin de ta tour (sans ward/mana/flash)) ou si Qiyana ne peut pas utiliser ses deux dashs (son W ne peut pas être utilisé au centre de la voie et son E est ciblé). Si Qiyana se rue en avant pour esquiver votre Q, vous devriez attendre pour utiliser votre W jusqu'à ce que votre Q soit sur le point d'être disponible si vous voulez forcer un combat, ou vous pouvez attendre que votre Q soit hors CD et l'utiliser pendant que l'un de ses dashs est en CD Son ultime est très facile à atterrir si elle peut se rapprocher de vous (à chaque fois qu'elle a des dashs, y compris Flash), mais il a un très court temps de lancer dans lequel vous pouvez utiliser Flash ou Stopwatch/Zhonya’s. Chaque fois qu'elle peut se rapprocher de vous et qu'elle a son ultime, essayez de rester près de votre tour ou loin des murs.  " << std::endl;
    std::cout << "Se focaliser sur l'armure est très efficace contre Qiyana, vous devriez donc construire un Cloth Armor -> Seeker's Armguar  si vous voulez vous battre contre elle. " << std::endl;
    std::cout << "summoners : Flash/Barrier/Cleanse/Exhaust/Tp" << std::endl;

    }


    else if (enemyChampion == "Rumble") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Rumble est un champion AP (ap 93% || ad 4%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Chaque sort lancé par Rumble augmente sa Vapeur. Quand Rumble atteint 50% de Vapeur, il entre dans la Zone rouge, ce qui confère des effets bonus à ses compétences de base. Quand il atteint 100% de Vapeur, il entre en Surchauffe, ce qui lui octroie de la vitesse d'attaque bonus et lui permet d'infliger des dégâts supplémentaires avec ses attaques de base, mais l'empêche d'utiliser ses compétences pendant quelques secondes. " << std::endl;
    std::cout << "Q = Rumble enflamme les adversaires devant lui, infligeant des dégâts magiques dans une zone conique pendant 3 sec. Dans la Zone rouge, les dégâts augmentent. 10/9/8/7/6s  " << std::endl;
    std::cout << "W = Rumble crée un bouclier qui le protège des dégâts et lui donne un bonus de move speed Dans la Zone rouge, les PV du bouclier et le bonus de vitesse sont augmentés. 6s" << std::endl;
    std::cout << "E = Rumble tire un harpon qui électrocute sa cible, lui infligeant des dégâts magiques et réduisant sa vitesse de déplacement et sa résistance magique. Rumble peut porter 2 harpons en même temps. Dans la Zone rouge, les dégâts et le pourcentage de ralentissement sont augmentés. 0.5s" << std::endl;
    std::cout << "R = Rumble tire une bordée de roquettes, créant un mur de flammes qui blesse et ralentit les ennemis. 130/105/80s " << std::endl;
   
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup even. Rumble à un meilleur waveclear en début de partie, mais Cassiopeia devient progressivement plus forte à mesure qu'elle obtient des items Sa barre rouge se remplit lorsqu'il lance ses autos. Lorsqu'elle est remplie à moitié au moins, ses compétences de base sont plus puissantes. Lorsqu'elle est pleine, il ne peut pas lancer de compétences pendant 6 secondes, mais ses attaques de base infligent des dégâts supplémentaires.Sa principale menace est son Q (dure 3s) Il est hors de portée (600) de toutes vos compétences, mais ses autres compétences l'aident à rester à portée de vous. Son W lui donne un bouclier pendant 1,5 seconde et de la vitesse de déplacement jusqu'à ce que le bouclier disparaisse. N'engagez pas de court trade tant que son shield est actif à moins de le brisez pour réduire sa movespeed. Son E peut stocker jusqu'à 2 harpons Ils sont bloqués par les sbires et n'infligent pas beaucoup de dégâts, mais ils ralentissent, ce qui peut l'aider à lancer son Q ou infliger des dégâts avec une Comet ou un Liandry's potentiel. Son ultime est sa seule compétence à longue portée(1700).Quittez - la aussi rapidement que possible car elle inflige des dégâts dans la zone pendant 5 secondes.   " << std::endl;
    std::cout << "Le Rylai aide à garder ses distances par rapport à la porté de son Q et à contrer ses slows" << std::endl;
    std::cout << "Summoners : Flash/Barrier/Tp" << std::endl;

    }


    else if (enemyChampion == "Ryze") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Ryze est un champion AP (ap 94% || ad 4%) " << std::endl;
   


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Les sorts de Ryze infligent des dégâts supplémentaires en fonction de son mana supplémentaire, et son mana max est augmenté d'un pourcentage en fonction de sa puissance. " << std::endl;
    std::cout << "Q = COURT CIRCUIT = Passivement, les autres sorts de base de Ryze réinitialisent le délai de récupération de Court-circuit et chargent une rune. Lorsque Ryze lance Court-circuit avec deux runes chargées, il gagne un bref bonus en vitesse de déplacement. À l'activation, Ryze tire une décharge de pure énergie en ligne droite, infligeant des dégâts au premier ennemi touché. Si la cible est marquée par Flux, Court-circuit inflige des dégâts supplémentaires et rebondit vers les ennemis proches marqués par Flux. 5s " << std::endl;
    std::cout << "W = Cage qui slow et si la cible est marqué de flux elle est stuns au lieu d'être slow. 13/12/11/10/9s " << std::endl;
    std::cout << "E = Marque la cible (si un de ses spells touche ne cible marqué = + de damage.) 3.5/3.25/3/2.75/2.5s " << std::endl;
    std::cout << "R = Crée un portail pour tp ses alliées et lui même 210/180/150s " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup en faveur de Cassiopeia. Cassiopeia est plus forte en 1v1 mais Ryze a un meilleur waveclear après le début de la game et peut farmer assez facilement contre elle. Son Q a un temps de recharge de 6 secondes (réinitialisé par W ou E) et est sa principale source de dégâts. Lorsqu'il est en cours de rechargement (ou s'il ne l'a pas au niveau 2), vous pouvez remporter les échanges en restant hors de portée (615) de son W et de son E. Son W est son unique CC ainsi q'une partie importante de son combo. Son E  amplifie ses dégâts sur ses compétences W et E. N'approchez pas trop des sbires pour éviter qu'il ne vous inflige les dégâts amplifiés. Pendant le court laps de temps où il est en cours de rechargement, il est vulnérable. Vous remportez la trades et les combats si vous lui appliquez votre poison. Avant de retourner à la base, vous manquez de mana, vous devriez donc seulement engager des trades où vous pouvez auto-attaquer ou esquiver ses Q, à moins que vous ne lui refusiez des sbires. Plus tard, vous devriez essayer de l'attaquer lorsque ses compétences sont en CD ou hors de portée, mais au pire vous échangerez de manière équitable et remporterez les combats prolongés si vous lui appliquez votre poison. Vous pouvez annuler son ultime en l'interrompant avec votre W ou en le stun avec votre R.  " << std::endl;
    std::cout << "Le Rylai est efficace pour garder Ryze à portée et le kiter en dehors de sa portée, car il bénéficie d'une vitesse de déplacement supplémentaire grâce à son passif (et généralement de Phase Rush) ainsi que d'un CC grâce à son W." << std::endl;
    std::cout << "Summoners : Flash/Barrier/Cleanse/Tp" << std::endl;

    }

    else if (enemyChampion == "Sylas") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Sylas est un champion AP (ap 94% || ad 3%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Après avoir lancé une compétence, Sylas stocke une charge de Volée de pétricite. Les attaques de base de Sylas dépensent une charge pour donner un coup de chaînes énergisé autour de lui, infligeant des dégâts magiques supplémentaires aux ennemis touchés. Tant que Sylas possède une charge de Volée de pétricite, sa vitesse d'attaque est augmentée. " << std::endl;
    std::cout << "Q = Envoi ses chaines + orbe au milieu qui explose 11/10/9/8/7s " << std::endl;
    std::cout << "W = Sylas se jette sur un ennemi pour infliger des dégâts et, contre des champions, récupérer des PV. 12/10.5/9/7.5/6s " << std::endl;
    std::cout << "E = Dash combinable avec son Q. 13/12/11/10/9s " << std::endl;
    std::cout << "R = Sylas vole la compétence ultime de l'ennemi et peut la lancer librement. 80/55/30s" << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "LARGEMENT en faveur de Cassio. Cassiopeia est plus forte à partir du niveau 2, surtout lorsqu'elle obtient des items. Faites attention à ses autos. Il inflige beaucoup de dégâts pour un champion AP en raison de sa vitesse d'attaque et des dégâts bonus de son passif. Son Q t inflige des dégâts à nouveau après un délai de 0,6 seconde. Il a beaucoup moins de dégâts lorsqu'il est en CD Son W lui rend des PV, davantage en fonction de ses PV manquants. Il est hors de portée (400) de toutes vos compétences. Son E est son principal moyen d'approche autre qu'un éventuel ultime de l'un de vos coéquipiers. Il peut réutiliser sa compétence E dans les 3,5 secondes pour se projeter vers sa cible, ce qui vous permet de l'étourdir avec votre R pour un étourdissement garanti. Vous pouvez essayer de toucher des Q, des W ou même auto - attaquer de loin, et réserver votre poison pour après qu'il ait utilisé ses deux castings de E, à moins que vous ne puissiez esquiver son E ou que vous vouliez qu'il s'approche de vous. Son ultime lui permet d'utiliser une copie de votre ultime ou celui d'un coéquipier.S'il prend votre ultime, vous serez tous deux étourdis si l'un de vous l'utilise en premier et que l'autre l'utilise pendant l'animation.Il est plus facile pour vous de vous détourner car son animation est plus évidente(il prend l'apparence de Cassiopeia).  " << std::endl;
    std::cout << "La résistance magique et les PV sont tous deux efficaces pour survivre face à ses dégâts explosifs. Un Rylai  est très utile pour garder ses distances par rapport à sa portée, donc c'est très bien pour prendre l'avantage. ANTI SUSTAIN EN CAS DE PROBLÈME" << std::endl;
    std::cout << "Summoners : Flash/Tp/Exhaust" << std::endl;

    }


    else if (enemyChampion == "Syndra") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Syndra est un champion AP (ap 88% || ad 4%) " << std::endl;
   


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Syndra collecte des éclats de courroux quand elle gagne des niveaux et quand elle blesse des ennemis, ce qui améliore ses compétences. Sphère noire : Syndra peut stocker une charge supplémentaire. Force de la volonté : dégâts bruts supplémentaires. Dispersion des faibles : largeur augmentée et ralentit toutes les cibles. Déchaînement de puissance : exécute les cibles dont les PV sont bas. " << std::endl;
    std::cout << "Q = Elle invoque des sphères noire (jusqu'a 3 ) qu'elle pourra manipuler avec ses autres spells 7s " << std::endl;
    std::cout << "W =  Syndra saisit et lance une sphère noire ou un sbire ennemi, infligeant des dégâts magiques et réduisant la vitesse de déplacement des ennemis. 12/11/10/9/8s  " << std::endl;
    std::cout << "E = (CONE) Syndra repousse les ennemis et les sphères noires, infligeant des dégâts magiques. Les ennemis frappés par les sphères noires sont étourdis. 17s " << std::endl;
    std::cout << "R = Syndra bombarde un champion ennemi avec toutes ses sphères noires. 120/100/80s" << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup en faveur de Syndra mais even si elle ne joue pas bien. Syndra peut harceler dès le lvl 1 et devient particulièrement puissante aux lvl 2,3 et 6. Son Q a la même portée que le vôtre, mais elle peut se déplacer en lançant sa compétence, ce qui lui donne effectivement une portée plus élevée si elle joue de manière optimale. N'échangez pas de Q après le niveau 8 (à moins que vous ne puissiez esquiver le sien ou que vous deviez l'atteindre pour faire des last hits) car le sien coûte moins de mana et inflige plus de dégâts. Évitez de vous aligner avec elle et ses sphères sombres car elle peut vous infliger de gros dégâts avec son E, dont le temps de recharge est de 18 secondes. Elle peut également préparer son E avec son ralentissement très difficile à esquiver de sa compétence W. Lorsque son E est en cours de recharge ou si vous êtes prêt à utiliser des sorts d'invocateur pour l'éviter, vous avez une fenêtre pour jouer de manière agressive. Ne vous approchez pas de sa compétence ultime à une portée de 675 si vous n'êtes pas suffisamment résistant pour la survivre. Elle inflige plus de dégâts en fonction du nombre de sphères sombres présentes, et elle peut facilement étourdir avec son E grâce aux nombreuses sphères sombres qui vous entourent. " << std::endl;
    std::cout << "MR super importante durant ce matchup Null-Magic Mantle ---> Verdant Barrier. efficaces si vous avez du mal à vous défendre contre elle après le niveau 6. La résistance magique et les PV sont tous deux efficaces pour survivre à ses dégâts explosifs. " << std::endl;
    std::cout << "Summoners : Flash/Barrier/Cleanse/Exhasut (si Syndra n'est pas bonne)/Tp" << std::endl;
    }


    else if (enemyChampion == "Taliyah") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Taliyah est un champion AP (ap 92% || ad 4%) " << std::endl;
   


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Taliyah augmente sa vitesse de déplacement lorsqu'elle est près des murs. 2s " << std::endl;
    std::cout << "Q = Taliyah lance une rafale de pierres dans une direction ciblée tout en se déplaçant librement. Cela crée un sol ouvragé sous ses pieds. Si Taliyah lance Rafale filée en se trouvant sur un sol ouvragé, elle consomme ce sol et lance un rocher plus puissant qui ralentit les ennemis. 7/6/5/4/3s " << std::endl;
    std::cout << "W = Caillou qui projette. 14/12.5/11/9.5/8 " << std::endl;
    std::cout << "E = Taliyah crée un champ de mines ralentissant. Si des ennemis effectuent une ruée ou sont projetés par-dessus, les mines explosent et les stuns 18/17/16/15/14s " << std::endl;
    std::cout << "R = Elle crée un long wall et surf dessus. 180/150/120s  " << std::endl;
   
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup even. Les deux côtés ont des opportunités égales pour remporter les trades avent le lvl 6, et Cassiopeia est legèremet plus forte en 1v1 après le lvl 6 Taliyah a un combo puissant au niveau 3 et un bon potentiel de roaming après le niveau 6. Son passif lui donne de la vitesse de déplacement lorsqu'elle est hors combat près des murs, gardez cela à l'esprit lorsque vous visez vos Q . Son  Q dépasse légèrement (1000) toutes vos compétences, vous devriez donc garder vos distances en dehors de sa portée à moins qu'elle ne s'exthend trop ou quelle ne puisse pas l'utiliser.  Lorsqu'elle se trouve sur un terrain travaillé, son Q ne lance qu'un seul éclat de pierre. Bien qu'elle soit visuellement tournée vers la direction de son Q, elle est en réalité tournée vers la direction où elle fait face ou est déplacée, donc ne forcez pas une ultime sur elle ; son Q continuera également à être lancé même si elle est victime d'un CC. Sa principale menace est son W combiné à son E À mesure que vous obtenez des objets, vous gagnerez les trades si vous appliquez le poison et esquivez ce combo. Vous pouvez annuler son R en lui infligeant des dégâts.    " << std::endl;
    std::cout << "Le Rylai si vous appliquez le poison et esquivez ce combo. Vous pouvez annuler son R en lui infligeant des dégâts. " << std::endl;
    std::cout << "Summoners : Flash/Barrier/Tp" << std::endl;
    

    }

    else if (enemyChampion == "Talon") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Talon est un champion AD (ap 1% || ad 95%) " << std::endl;
   


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Les compétences de Talon blessent les champions et les grands monstres (cumulable 3 fois). Quand Talon lance une attaque de base sur un champion portant 3 effets Blessure, ce champion se met à saigner et subit d'importants dégâts sur la durée. " << std::endl;
    std::cout << "Q = Talon poignarde l'unité ciblée. S'il est en mêlée, cette attaque inflige des dégâts critiques. S'il est à distance, Talon saute sur la cible avant de la poignarder. Talon regagne des PV et le délai de récupération est réduit si la compétence tue la cible. 8/7.5/7/6.5/6  " << std::endl;
    std::cout << "W = Shurken de 3 lame 9/8.5/8/7.5/7s  " << std::endl;
    std::cout << "E = Saute au dessus des murs 2s" << std::endl;
    std::cout << "R = Talon projette des lames autour de lui et devient invisible, augmentant sa vitesse de déplacement. Quand Talon redevient visible, les lames reviennent vers lui. 100/80/60s  " << std::endl;
  
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup en faveur de Talon, Talon a un meilleur Raoming et de puissant all-ins aux lvl 2 et 6. Son Q a un temps de recharge de 8 secondes (réduit de moitié s'il tue une unité) et dépasse légèrement (575) toutes vos compétences, donc gardez vos distances jusqu'à ce que vous puissiez le tuer avant qu'il ne vous tue. Il infligera plus de dégâts s'il se trouve à moins de 170 unités de distance, alors faites attention à ne pas vous approcher trop près de lui ou de son Flash Q. Son W est sa seule façon de vous trade des damages  si vous restez en dehors de la portée de son Q. Évitez de vous faire toucher à la fois à l'aller et au retour, car cela lui permet d'activer son passif qui inflige des dégâts sur la durée. Son E lui permet de sauter par - dessus n'importe quel mur, alors essayez de le suivre pour votre équipe et ne le pourchassez pas trop (vous pouvez néanmoins lui Flash dessus avant qu'il atteigne un mur).Il ne peut pas sauter par - dessus le même mur pendant un certain temps. Son ultime lui confère une invisibilité et de la MS pendant un maximum de 2,5 secondes, mais s'il l'utilise de loin, il ne fera pas autant de dégâts, donc il l'utilisera généralement lorsqu'il est près de vous, sauf s'il tente de s'échapper. Vous pouvez Flash pour éviter les dégâts de retour, sauf s'il vous auto-attaque. Vous pouvez l'Exhaust dès qu'il vous Q, et même s'il utilise son ultime, il sera ralenti et les dégâts seront réduits, vous aurez donc beaucoup plus d'opportunités pour le poursuivre. Vous pouvez R -> Flash vers l'arrière, lorsque Talon vous Q de sa portée maximale, pour garantir un étourdissement et le ramener vers l'endroit où vous avez flashé, comme sous la tour.  " << std::endl;
    std::cout << "L'armure et la santé sont tous deux efficaces pour survivre à son all-in. Un Rylai" << std::endl;
    std::cout << "Summoners : Flash/Exhaust/Tp" << std::endl;
    }

    else if (enemyChampion == "Tristana") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Tristana est un champion AD (ap 12% || ad 86%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Augmente la portée d'attaque de Tristana quand elle gagne un niveau.  " << std::endl;
    std::cout << "Q = Tristana tire plus rapidement avec son arme ; sa vitesse d'attaque est augmentée temporairement. 20/19/18/17/16s  " << std::endl;
    std::cout << "W = Propulsion au dans les airs inflige des dégats à l'impact + slow. 22/20/18/16/14s " << std::endl;
    std::cout << "E = Charge explosive : Lorsque Tristana élimine une unité, ses projectiles explosent et infligent des dégâts aux ennemis proches. Peut être activé pour placer sur une cible ennemie une bombe qui explose après un court moment, infligeant des dégâts aux unités proches. 16/15.5/15/14.5/14 " << std::endl;
    std::cout << "R = Enorme boulet de canon qui repousse la cible. Si la cible porte une Charge explosive, le rayon de déflagration de la charge est doublé. 120/110/100s " << std::endl;
  
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup légèrement en faveur de Cassio. Tristana est plus forte avant le niveau 6, mais Cassiopeia a les outils pour survivre et contrer ses aggressions Au fur et à mesure que Cassiopeia obtient des nouveaux items, elle devient plus forte que Tristana et peut la harceler de manière fiable avec un avantage quelconque. Au lvl 1 vous pouvez utiliser E à l'extérieur de sa portée pour déclencher Manaflow ou briser son bouclier osseux s'il l'a. Après le niveau 2, désengagez son W -> E, afin qu'elle ne puisse pas obtenir son W réinitialisé (4 attaques avec son E sur vous). N'utilisez pas le poison pour push à moins d'être plus fort qu'elle (y compris si ses compétences sont en temps de recharge) ; elle finira par repousser vers vous en raison de son passif E. Son passif lui donne de la portée par niveau.Sa portée est faible pendant la phase de laning. Son Q lui donne un bonus de vitesse d'attaque pendant 7 secondes. Il n'est pas particulièrement fort, jusqu'à ce qu'elle obtienne des objets, en dehors des trades rapideavec son E. Son W a un temps de recharge de 22 secondes (réinitialisé par les éliminations ou 4 attaques avec son E sur vous) et a une portée de 900, donc elle peut se rapprocher de loin. Plus elle saute loin, plus il lui faut de temps pour atterrir, donc vous pouvez lui infliger des dégâts en plein vol. Si elle saute depuis loin, vous pouvez utiliser votre ultime pour garantir un étourdissement. Pendant que cette compétence est en temps de recharge, vous pouvez profiter de sa portée plus faible. Son passif E inflige des dégâts autour des sbires qu'elle tue, donc ne vous tenez pas trop près des sbires qu'elle peut tuer. Son E est sa principale source de dégâts en dehors des dégâts par seconde des autos attacks,  donc évitez de la laisser l'activer à moins d'être beaucoup plus fort, et cherchez à la combattre quand elle est en temps de recharge. Il explose après 4 secondes ou après 4 attaques automatiques, alors ajustez votre barrière ou votre épuisement en conséquence si vous les avez. Son ultime est un coup de recul, donc ne lancez pas votre ultime juste avant qu'il ne vous atteigne, à moins que vous ne vouliez que votre ultime parte en arrière pour toucher quelqu'un d'autre. Vous pouvez tenter de toucher des Q en dehors de sa portée d'attaque, une fois que vous avez suffisamment de durabilité en mana, et si elle utilise son W en avant, vous devriez utiliser votre W à l'endroit où elle atterrit.     " << std::endl;
    std::cout << "Seeker's Armguard peut aider en 1 contre 1 car la plupart de ses dégâts sont physiques et indodgeables." << std::endl;
    std::cout << "Flash/Barrier/Exhasut" << std::endl;

    }


    else if (enemyChampion == "TwistedFate") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "TwistedFate est un champion AP (ap 85% || ad 12%) " << std::endl;
  


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Quand il tue une unité, Twisted Fate lance son dé ''porte-bonheur'' et reçoit entre 1 et 6 PO supplémentaires.  " << std::endl;
    std::cout << "Q = Twisted Fate tire trois cartes qui infligent des dégâts à toutes les unités qu'elles transpercent. 6/5.75/5.5/5.25/5s  " << std::endl;
    std::cout << "W = Twisted Fate choisit une carte dans son paquet et l'utilise pour l'attaque suivante, gagnant des effets supplémentaires. 6s " << std::endl;
    std::cout << "E = Twisted Fate inflige des dégâts supplémentaires toutes les 4 attaques. En outre, sa vitesse d'attaque est augmentée.  " << std::endl;
    std::cout << "R = Twisted Fate prédit le destin de ses ennemis, révélant les champions ennemis et permettant d'utiliser Portail, ce qui téléporte Twisted Fate à un endroit de la carte en 1,5 sec. 180/150/120s  " << std::endl;
   
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup favorable à Cassio. Cassio est plus forte en 1v1 mais après le lvl 6, Twisted Fate peut très bien roam. Son Q, est sa seul compétence longue porté que vous devez éviter. Sa principal menace est son W Il a la même portée (525) que ses attaques automatiques, donc il est surpassé par toutes vos compétences. Il a la même portée (525) que ses attaques automatiques, donc il est surpassé par toutes vos compétences. Vous pouvez gagnez les trades prolongés si vous appliquez du poison, donc essayez de garder vos distances en dehors de sa portée d'attaque ou attendez que son W soit en temps de recharge. Quand il a son ultime, essayez de pousser la vague vers sa tour ou de le blesser pour l'empêcher de se déplacer efficacement. Je recommande Cleanse, à moins que vous n'utilisiez la rune de ténacité et que l'ennemi ne puisse pas bien ganker, car il a une très courte durée de recharge sur son étourdissement qu'il peut utiliser assez facilement.  " << std::endl;
    std::cout << "Un Rylai aide à garder vos distances en dehors de sa portée et à le poursuivre/chasser, même s'il vous met sous CC, c'est donc très bon pour la phase de neige." << std::endl;
    std::cout << "Flash/Cleanse/Tp" << std::endl;

    }

    else if (enemyChampion == "Veigar") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Veigar est un champion AP (ap 94% || ad 3%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Frapper un champion ennemi avec un sort, tuer un champion ou effectuer une assistance octroie à Veigar un bonus permanent en puissance.    " << std::endl;
    std::cout << "Q = Veigar lance une boule d'énergie des ténèbres, infligeant des dégâts magiques aux deux premiers ennemis touchés. Les unités tuées par ce sort confèrent à Veigar un gain de puissance permanent. 6/5.5/5/4.5/4s  " << std::endl;
    std::cout << "W = Fait un cercle au sol et fait bobo, les stacks de son passif réduise le cd du sort. 8-0s (basé sur les stacks de son passif) " << std::endl;
    std::cout << "E = Cage qui stun si on touche les barreau 20/18.5/17/15.5/14s " << std::endl;
    std::cout << "R = Lance de l'énergie explosive sur le champion ennemi ciblé, infligeant d'importants dégâts magiques qui augmentent avec les PV manquants de la cible. 20/18.5/17/15.5/14s  " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup en faveur de Cassio. Cassio est plus forte en 1v1, mais si le jungler de Veigar met de la preassure, elle aura du mal à le dominer seule en raison de son E. Il obtient de l'AP en tuant des unités avec so Q ou en touchant des champions avec n'importe laquelle de ses compétences. Essayez de lui mettre de la pression pour l'empêcher de tuer facilement les sbires avec son Q, mais évitez également de vous faire toucher par ses compétences à moins que vous ne puissiez prendre un échange prolongé/lui refuser des CS. Son W a un ratio AP de 100%, donc il fait beaucoup de dégâts au fur et à mesure que la partie avance, mais il met beaucoup de temps à atterrir, donc ça vaut la peine d'essayer de l'esquiver. Son E est sa seule défense contre vous. Évitez de marcher dans l'étourdissement (restez à l'intérieur de la cage si vous êtes déjà dedans), à moins que vous n'esquiviez une compétence cruciale ou que vous soyez prêt à utiliser Cleanse ou QSS.  Son R est un point - and -click à 650 de portée qui inflige beaucoup de dégâts supplémentaires en fonction des PV manquants.Faites attention à ne pas vous approcher trop près lorsque vous avez peu de PV, et utilisez Barrier / Seraph's plus tôt dans un combat pour éviter de vous retrouver en situation de faible PV.  " << std::endl;
    std::cout << "De la MR est une option très efficace (plus que les PV car son ult inflige des damages suplémentaires en fonction des PV manquants." << std::endl;
    std::cout << "Summoners : Flash/Cleanse/Tp" << std::endl;

    }


    else if (enemyChampion == "Vel'Koz") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Vel'Koz est un champion AP (ap 76% || ad 3%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Les compétences de Vel'Koz appliquent des effets Décomposition organique aux ennemis touchés. À 3 effets cumulés, l'ennemi subit une explosion de dégâts bruts." << std::endl;
    std::cout << "Q = Projectile qui se dédouble. 7s  " << std::endl;
    std::cout << "W = Faille en ligne droite 19/18/17/16/15s (1.5s si stack) " << std::endl;
    std::cout << "E = Cercle qui projette (stuns) 16/15/14/13/12s " << std::endl;
    std::cout << "R = Tire un laser. 120/100/80s  " << std::endl;
   
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup légèrement favorable à Vel'Koz. Il a un meilleur waveclear et peut harceler, en plus de disposer de bonne capacité défensives. Il est fort dès le lvl 3 et peut mettre la pression pour un kill au lvl 6. Son il est beaucoup plus facile de trade quand son Q est en CD Les compétences de Vel'Koz appliquent des effets Décomposition organique aux ennemis touchés. À 3 effets cumulés, l'ennemi subit une explosion de dégâts bruts.  Faites également attention à son E en général car il peut vous tuer en un combo s'il le touche et qu'il a son ultime. Il a peu de menace de tuer sans son ultime, mais il peut quand même vous infliger beaucoup de dégâts. Vous pouvez utiliser votre R ou R->Flash lorsque Vel'Koz canalise son ultime pour le stunner de manière garantie et l'empêcher d'utiliser son ultime." << std::endl;
    std::cout << "Son passif inflige des dégâts vrais, donc la résistance magique (MR) est principalement efficace contre ses harcèlements avec son Q et son W, mais moins efficace autrement. Rylai’s et Luden’s sont utiles pour le maintenir à distance (Luden est plus pour le waveclear)." << std::endl;
    std::cout << "Flash/Barrier/Tp" << std::endl;

    }

    else if (enemyChampion == "Viktor") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << " Viktor est un champion AP (ap 95% || ad 3%) " << std::endl;
    


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Viktor peut faire évoluer ses compétences de base quand il tue des champions ennemis " << std::endl;
    std::cout << "Q = Viktor inflige des dégâts magiques à une unité ennemie, obtient un bouclier et renforce sa prochaine attaque de base. Amélioration : le bouclier de Siphonnage est augmenté de 60% et Viktor augmente sa vitesse de déplacement après avoir lancé le sort. 9/8/7/6/5s " << std::endl;
    std::cout << "W = Cage qui slow sauf si on reste trop longtemp = stun 17/16/15/14/13s " << std::endl;
    std::cout << "E = Rayon qui fait des dégat + laisse une trace + explose quelque seconde plus tard 17/16/15/14/13s " << std::endl;
    std::cout << "R = (Gros cercle avec un truc éléctrique au dessus qui se déplace) Viktor crée une anomalie dans une zone, infligeant des dégâts magiques et interrompant les canalisations ennemies. L'anomalie inflige ensuite périodiquement des dégâts magiques à tous les ennemis proches. Viktor peut déplacer l'anomalie. Amélioration : Tempête du chaos se déplace 25% plus vite. 120/100/80s   " << std::endl;
   
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup légèrement en faveur de Viktor. Viktor est meilleur en 1v1 mais est plus vulnérable aux gank et plus faible dans les escarmouches. Son Q  lui donne un petit bouclier et renforce son prochain auto. Vous ne remporterez pas un échange contre lui à moins de lui infliger un poison, alors évitez-le au niveau 1.Son W  est son seul CC pendant la phase de lane. Priorisez de sortir de sa zone pour ne pas être étourdi, et si vous appliquez du poison, vous remporterez les échanges prolongés pendant que son W est en recharge. Son E est sa principale source de waveclear, de harcèlement et de dégâts. Il vous surpasse en portée, donc ne cherchez pas à appliquer du poison à moins d'obtenir le  wave clear  ou si Viktor s'approche de votre portée et que vous pouvez engager un échange prolongé. Il est beaucoup plus faible pendant la recharge, mais s'il vous touche, il inflige des dégâts assez importants au fur et à mesure que la partie avance, ce qui pourrait le rendre capable de vous tuer si vous êtes à faible santé. Lorsqu'il est amélioré, il inflige des dégâts dans la zone 1 seconde après. Son ultime est sa principale source de DPS.Il se déplace lentement au début, alors essayez de vous éloigner de lui.      " << std::endl;
    std::cout<<" Les pots corrompus sont efficaces contre lui si vous avez du mal à Trade. Rylai et Luden seront utile pour le maintenir a distance. (Luden + pour le waveclear)" << std::endl;
    std::cout << "Flash/Barrier/Tp" << std::endl;

    }

    else if (enemyChampion == "Vladimir") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Vlaimir est un champion AP (ap 94% || ad 4%) " << std::endl;



    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Vladimir gagne 1 pt de puissance tous les 30 PV bonus, et 1,6 PV bonus tous les 1 pt de puissance (ces effets ne se cumulent pas entre eux). " << std::endl;
    std::cout << "Q = Vole de vie 9/7.9/6.8/5.7/4.6s  " << std::endl;
    std::cout << "W = Vladimir plonge dans une flaque de sang, devenant impossible à cibler pendant 2 sec. Les ennemis dans la flaque sont slows et Vladimir peut aspirer leur vie. 28/25/22/19/16s  " << std::endl;
    std::cout << "E = (cercle plus orbe de sang au dessus de sa tête) Vladimir dépense ses propres PV pour charger un orbe de sang qui, une fois lâché, infligera des dégâts de zone autour de lui. Les Vagues de sang peuvent être bloquées par les unités ennemies. 13/11/9/7/5s " << std::endl;
    std::cout << "R = (crée une flaque de sang avec un trou) Vladimir contamine une zone avec une peste virulente. Les ennemis infectés subissent plus de dégâts pendant la durée du sort. Après quelques secondes, Peste sanguine inflige des dégâts magiques aux ennemis infectés et rend des PV à Vladimir pour chaque champion ennemi touché. 120s " << std::endl;
  
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup en faveur de cassio. Il faut un peu de temps pour que Cassiopeia ait suffisament de mana pour tuer Vladimir de manière fiable à moins qu'elle ne prenne Ignite. Et Vladimir a une pression d'élimination significative après le niveau 6 s'il prend Ignite. Son Q est son principal outil de trade avant le niveau 6. Il est plus faible que les capacités de Cassiopeia, mais il peut se soigner en infligeant des dégâts aux sbires. Il est très important de rester hors de portée (600) de ses Q améliorés (jusqu'à ce qu'il les utilise sur autre chose ou qu'ils expirent), à moins que vous ne puissiez vous engager dans un combat prolongé, car ils infligent beaucoup plus de dégâts et se soignent beaucoup plus, mais se soignent moins avec les sbires. Son W lui accorde 2 secondes d'invulnérabilité (le DoT continue de causer des dégâts) et une vitesse de déplacement décroissante. Il ralentit également et inflige un peu de dégâts + soins, alors évitez de rester dessus à moins que vous ne le poursuiviez. Il a beaucoup moins de potentiel de contre-jeu pendant qu'il est en recharge. Si vous lancez votre W sur lui avant qu'il ne le lance, il sera toujours ralenti et immobilisé à l'intérieur. S'il a un Protobelt, il peut l'utiliser pendant son W. Son E  a une portée de seulement 600 unités, le ralentit de 20 % et peut être bloqué par les sbires ou les coéquipiers, donc vous pouvez utiliser toutes vos capacités en restant en dehors de sa portée. Cependant, il peut utiliser toutes ses capacités (y compris les sorts d'invocateur) tout en chargeant son E. Son ultime avec une portée de 700 unités augmente les dégâts de 10 % pendant 4 secondes, puis inflige beaucoup de dégâts et soigne.Il en a besoin pour gagner un combat à moins qu'il ne devienne très puissant ou que vous soyez à faible santé.   " << std::endl;
    std::cout << "La résistance magique et et la vie  sont tous deux efficaces pour survivre à son combo d'élimination. Rylai’s est très utile pour maintenir ses distances, donc c'est très bon pour la domination" << std::endl;
    std::cout << "Summoners : Flash/Barrier/Ignite/Tp" << std::endl;
    }


    else if (enemyChampion == "Xerath") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Xerath est un champion AP (ap 94% || ad 3%) " << std::endl;
   


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Les attaques de base de Xerath restaurent régulièrement du mana. À chaque fois que Xerath tue une unité, ce délai de récupération est réduit. 16s" << std::endl;
    std::cout << "Q = Tir un rayon (plus il charge longtemp plus il va loin)  9/8/7/6/5s" << std::endl;
    std::cout << "W = Fait tomber la foudre (slow) si au centre du cercle = encore + de damage et + de slow  14/13/12/11/10s " << std::endl;
    std::cout << "E = Boule qui stuns 13/12.5/12/11.5/11 " << std::endl;
    std::cout << "R = Tir de 5 boules à longue distance. 130/115/100s   " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup en faveur de Xerath. Sa force réside dans sa capacité à vous harceler jusqu'a la mort quand il est hors de votre porté, mais il ne peut le faire de manière fiable que si il a une bonne gestion de son mana et qu'il arrive a toucher ses spells tout en évitant les ganks. Il peut récupérer un peu de mana en attaquant les sbires avec son passif, doublé s'il attaque des champions. Si vous l'attaquez en retour, vous gagnez les échanges. S'il attaque les sbires, vous pouvez l'atteindre. S'il n'attaque pas les sbires, vous avez un avantage de poussée complet, et il finira par manquer de mana jusqu'à ce qu'il obtienne des objets de gestion du mana ou un buff bleu. Pendant qu'il charge son Q, il est ralenti, vous avez donc l'occasion de l'atteindre s'il prend trop de temps pour viser.Vous pouvez R->flash pendant qu'il charge Q, ou W -> flash chaque fois qu'il est trop overexthended, mais le compromis est évidemment que vous utilisez Flash. Son W avec un temps de recharge de 14 secondes est très large, mais ralentit davantage au centre. Son principal CC est son E qui stuns pour une durée plus courte lorsque vous êtes plus proche de lui. Soit vous restez dans votre propre portée sur lui prêt à l'esquiver, soit vous vous rapprochez beaucoup de lui. Faites attention à son ultime lorsque vous êtes à faible santé.Il a une portée extrêmement longue(5000).  " << std::endl;
    std::cout << "La mr est plus qu'efficace que la vie contre Xerath car il vous harcèlera jusqu'à épuisement. Le Rylai et le Luden sont utiles pour le garder à portée (Luden’s est plus pour le waveclear).  " << std::endl;
    std::cout << "Summoners : Flash/Barrier/Cleanse/Tp" << std::endl;
        
}

    else if (enemyChampion == "Yasuo") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Yasuo est un champion AD (ap 11% || ad 85%) " << std::endl;
   


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Les chances de coup critique de Yasuo sont augmentées. De plus, Yasuo génère un bouclier quand il se déplace. Le bouclier se déclenche quand un champion ou un monstre lui inflige des dégâts." << std::endl;
    std::cout << "Q = Coup d'estoc blessant tout les ennemis sur une ligne  À l'impact, octroie un effet Tempête menaçante pendant quelques secondes. Après avoir cumulé 2 effets, Tempête d'acier crée une tornade qui projette dans les airs. Tempête d'acier est considérée comme une attaque de base et est donc renforcée par les mêmes choses. 4-1.33s (basé sur son ATTACK SPEED). " << std::endl;
    std::cout << "W = Mur de vent qui empêche tout les projectiles pendants 4 seconde 25/23/21/19/17s  " << std::endl;
    std::cout << "E = DASH Yasuo se rue à travers l'ennemi ciblé, infligeant des dégâts magiques. Chaque utilisation augmente les dégâts de la ruée suivante jusqu'à un montant max. Ne peut pas être réutilisé sur le même ennemi pendant quelques secondes. Si Tempête d'acier est lancée pendant cette ruée, elle donne un coup circulaire. 0.5/0.4/0.3/0.2/0.1s   " << std::endl;
    std::cout << "R = Bondit sur un champion ennemi projeté dans les airs et lui inflige des dégâts physiques. En outre, tous les ennemis qui étaient projetés dans les airs dans la zone sont maintenus en l'air. Remplit totalement l'Impulsion mais réinitialise tous les effets cumulés de Tempête menaçante. Ensuite, pendant une durée modérée, les coups critiques de Yasuo ont une pénétration du bonus d'armure significativement augmentée. 70/50/30s  " << std::endl;
   
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup even. Yasuo est plus fort au lvl 2, mais peut être aussi menacant dès le lvl 1 s'il start au E et que vous vous approchez trop près. Il a un leger avantage au début de game (vous n'avez pas assez de mana pour le tuer à moins qu'il ne commette une grave erreur) mais Cassiopeia peut farmer en toute sécurité, tandis que Yasuo ne peut pas bien partir en roaming à moins qu'il n'ait des alliés qui knockups. Au niveau 1, vous ne devriez généralement pas infliger de dégâts à Yasuo ou aux sbires à moins qu'il ne commence à pousser vers vous, afin de pouvoir geler la vague devant votre tour. Vous pouvez pousser si Yasuo n'a pas d'avantage de sort de combat et que vous êtes sûr de réussir vos Q. Son Q régulier avec un temps de recharge de 4 à 1 seconde est assez étroit, donc il est préférable de l'esquiver sur le côté si vous ne pouvez pas vous éloigner de sa portée.  Gardez généralement vos distances lorsqu'il est sur le point d'obtenir sa tornade de Q (quand il a utilisé deux fois son Q sur n'importe quelle cible). S'il a des cibles pour dasher, vous devrez généralement lacher un Q+W à moins que vous ne visiez la destination de son E (distance fixe) ou que vous vouliez qu'il dash dans une certaine direction. Vous pouvez essayer de lancer des Q max range lorsqu'il last hit si vous êtes près de votre tour ou pas assez près de vos sbires pour qu'il puisse vous atteindre. Il peut toujours l'esquiver en reculant hors de portée ou en utilisant son E à travers votre sbire, mais il y a une chance qu'il ne le fasse pas, et vous pouvez l'auto/E s'il dash trop près de vous. Lancer un W en premier est beaucoup plus fiable, mais il peut utiliser son propre W pour se désengager, et il y a peu d'occasions où il est sûr de commencer avec W en phase de lane. Vous pouvez vous tenir bien derrière vos sbires de mage, et il ne pourra pas vous atteindre sans utiliser son E pour sauter sur vous, auquel cas vous lancez votre Q ensuite. S'il vient vers vous, mais ne vous E pas, vous pouvez utiliser votre E et auto-attaquer sans riposte. Vous pouvez vous tenir sur le côté de la vague si vous êtes en sécurité face aux embuscades. Cela vous permet de lancer votre W sur toute votre vague de sbires qu'il voudra dasher à travers. Même si vous n'êtes pas sur le côté de votre vague, vous voudrez généralement utiliser votre W sur vos sbires si possible pour minimiser la mobilité de Yasuo. Son W dure 4 secondes et a un temps de recharge de 26 secondes, mais il bloque seulement votre W (seulement la partie de votre W qui touche le mur de vent) et votre E, et vous pouvez potentiellement rapidement vous déplacer sur le côté avec vos boosts de vitesse. Gardez vos distances loin de sa portée E -> Q -> Flash si cela vous menace. Les points en W après avoir maximisé votre E sont particulièrement efficaces car son E est basé sur sa vitesse de déplacement. Vous pouvez utiliser votre ultime sur Yasuo alors qu'il est en animation de son E vers vous pour un stuns garantit,  mais c'est trop lent s'il utilise son E sur vous (ou quelque chose de très proche), et vous devez toujours faire attention à ce qu'il Flash. S'il a son ultime, n'utilisez rien lorsque vous êtes sur le point d'être knock-up autre que votre W sur vous-même ou votre E, car son ultime est un dash. Les dégâts de son ultime s'appliquent lorsqu'il atterrit, donc juste avant cela est le moment où vous devriez utiliser Barrier ou Exhaust si vous les avez.  " << std::endl;
    std::cout << "Bonus : Vous pouvez W -> Flash ou R -> Flash en arrière quand Yasuo E -> Q sur vous." << std::endl;
    std::cout << "Un Rylai est très efficace car son E est basé sur sa vitesse de déplacement. L'armure n'est pas aussi efficace contre la pénétration d'armure de l'ultime de Yasuo, mais un Zhonya est préférable si vous craignez de vous faire tower dive. Liandry aide à infliger des dégâts à Yasuo s'il est derrière le mur de vent ou si vous ratez le poison, Riftmaker aide à remporter les duels contre Yasuo et ses coéquipiers si vous êtes sûr de réussir votre poison et de vous déplacer, ou Everfrost stuns Yasuo alors qu'il est derrière le mur de vent ou au moins le ralentir pour contrer son E ou le kiter. " << std::endl;
    std::cout << "Summoners : Flash/Barrier/Exhaust/Tp" << std::endl;
}

    else if (enemyChampion == "Yone") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Yone est un champion AD (ap 21% || ad 65%) " << std::endl;
 


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Une attaque de Yone sur deux inflige des dégâts magiques. De plus, ses chances de coup critique sont augmentées. " << std::endl;
    std::cout << "Q = Coup d'estoc blessant tout les ennemis sur une ligne,  octroie un effet Tempête menaçante pendant quelques secondes. À 2 effets cumulés, Acier mortel permet à Yone de se ruer vers l'avant dans une rafale de vent qui projette les ennemis dans les airs. Acier mortel est considéré comme une attaque de base et est donc renforcé par les mêmes choses. 4-1.33s (Basé sur l'attack speed) " << std::endl;
    std::cout << "W = Frappe ciculaire devant lui Yone obtient un bouclier dont les PV augmentent avec le nombre de champions touchés. 14-6 (basé sur l'attack speed) " << std::endl;
    std::cout << "E = L'esprit de Yone quitte son corps et gagne en vitesse de déplacement. Quand cette compétence prend fin, Yone est renvoyé de force dans son corps et une partie des dégâts qu'il a infligés sous forme d'esprit est répétée. 22/19/16/13/10s  " << std::endl;
    std::cout << "R = Yone se téléporte derrière le dernier champion sur une ligne en donnant un coup si puissant qu'il attire vers lui tous les ennemis touchés. 120/90/60s " << std::endl;
   
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup even. Cassiopeia peut harceler Yone aux lvl 1 et 2. Après cela, le matchup dépend fortement des ganks. Si Cassiopeia n'a pas à se soucier des ganks, elle peut harceler Yone avec peu de représailles. Si elle est vulnérable aux ganks, Yone peut largement remporter les échanges et exercer une forte pression pour tuer. Son Q régulier avec un temps de recharge de 4 à 1 seconde est assez étroit, donc il est préférable de l'esquiver sur le côté si vous ne pouvez pas vous éloigner de sa portée. Gardez vos distances lorsqu'il est sur le point d'obtenir sa tornade de Q (quand il a utilisé deux fois son Q sur n'importe quelle cible). Il peut Q quelque chose -> Flash pour étendre la portée de son Q. Son W avec un temps de recharge de 16 secondes fait des dégâts et lui donne un grand bouclier en fonction du nombre de champions touchés. Sa principale menace vient de son E avec un temps de recharge de 22 secondes (à partir de son retour) qui l'aide à se rapprocher et à infliger plus de dégâts pendant 5 secondes. Sauf si vous avez un grand avantage, vous devriez vous concentrer sur la disengager avec la vitesse de déplacement de votre Q. Si vous avez beaucoup de mana ou pas de Q, vous pouvez utiliser votre W car il a à peu près le même temps de recharge que son E, et il est plus faible lorsque les deux sont en temps de recharge. Il ne peut pas revenir lorsqu'il est bloqué au sol ou étourdi, mais il peut revenir avant que le CC ne prenne effet. Si vous essayez de vous échapper, n'utilisez pas votre W juste avant qu'il ne revienne de son E (son ultime peut être utilisée pour prolonger la durée) car cela l'empêchera de revenir et lui permettra de continuer à vous infliger des dégâts. Si vous êtes plus fort : Faites reculer vers le côté après qu'il a utilisé son E, afin de pouvoir atteindre l'endroit où il revient et soyez prêt à le empoisonner. Essayez d'utiliser votre W avant d'utiliser votre ultime pour qu'il ne puisse pas esquiver votre ultime avec son E de retour. Si vous avez besoin d'utiliser Flash, utilisez-le vers l'endroit où il revient. Faites attention à l'endroit où vous faites recall car il peut utiliser son E pour vous arrêter/tuer, même si vous êtes sous une tour, et cela ne sera puni que s'il est ganké. Son ultime lui confère beaucoup de menace supplémentaire, surtout s'il a la tornade de Q (garantit que son ultime atterrit), l'E ou Flash et que vos capacités défensives sont en temps de recharge. Si son ultime est sur le point de vous toucher, lancez votre Q ou votre W légèrement derrière vous pour vous assurer de l'empoisonner. Son ultime peut être utilisée comme une évasion, vous pouvez donc envisager de la bloquer avec votre corps.        " << std::endl;
    std::cout << "Bonus : Vous pouvez utiliser W -> Flash ou R -> Flash en arrière lorsque Yone utilise son ultime vers vous. Vous pouvez l'ultime pour un étourdissement garanti si vous le faites dès qu'il lance son ultime et qu'il est dans votre portée." << std::endl;
    std::cout << "Le Rylai est très efficace pour vous éloigner de son E et le poursuivre après que ses capacités soient en temps de recharge. L'armure n'est pas très efficace sauf si son jungler est AD car il inflige aussi des dégâts magiques. Riftmaker aide à le vaincre dans les duels et à se maintenir après les trades" << std::endl;
    std::cout << "Summoners : Flash/Barrier/Exhaust/Tp" << std::endl;

}

    else if (enemyChampion == "Zed") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Zed est un champion AD (ap 5% || ad 90%) " << std::endl;
    

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif =  Les attaques de base de Zed infligent des dégâts magiques supplémentaires aux cibles dont les PV sont faibles. Cet effet ne peut se déclencher sur un même champion ennemi qu'une fois toutes les quelques secondes." << std::endl;
    std::cout << "Q = Shuriken qui touche plusieur cible (moins de dégat a chaque cible) 75/70/65/60s  " << std::endl;
    std::cout << "W = Ombre :Passive : Zed regagne de l'énergie quand ses ombres et lui frappent un ennemi avec la même compétence. L'énergie ne peut être récupérée qu'une fois par utilisation d'une compétence. Active : l'ombre de Zed fonce vers l'avant et reste sur place pendant quelques secondes. Réactiver Ombre vivante permet à Zed de changer de position avec cette ombre. 20/18.5/17/15.5/14s " << std::endl;
    std::cout << "E = Tournoie Zed et ses ombres donnent un coup de taille et blessent les ennemis proches. Les ennemis touchés par la taillade d'une ombre sont ralentis. 5/4.5/4/3.5/3s " << std::endl;
    std::cout << "R = Fend ur l'adversaire (inciblable) Zed devient impossible à cibler et fonce sur un champion ennemi pour le marquer. Au bout de 3 sec, la marque explose, infligeant de nouveau un pourcentage de tous les dégâts infligés par Zed pendant la durée de la marque. 120/100/80s " << std::endl;
   
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup even. Zed est fort au lvl 2 et surtout au lvl 3 et au-dela, mais vous devez simplement éviter son W et les capacités qu'il peut utiliser à partir de celui-ci. Vous devez être dans une position sûre ou avoir rappelé quand il s'apprête à atteindre le niveau 6. Son Q avec un temps de recharge de 6 secondes fait moins de dégâts plus il traverse vos sbires. Son W a un temps de recharge de 20 secondes mais dure 5 secondes. Il perd beaucoup de potentiel pour tout engager lorsqu'il est en temps de recharge. Faites attention à ses ombres. Il ne peut se téléporter qu'une seule fois vers elles, mais il peut en créer une depuis son W et une autre depuis son R (dernières 6 secondes). Si vous voulez utiliser votre R immédiatement pour toucher Zed juste après qu'il ait atterri de son R, mais il peut se retourner ou se téléporter vers son W s'il l'a lancé avant de l'activer (il doit attendre 0,5 seconde avant de pouvoir revenir vers son ombre de R). Vous voudrez peut-être R vers l'endroit d'où il a utilisé son R et flasher en arrière pour le prendre par surprise avec l'étourdissement s'il se retourne. Vous voudrez souvent utiliser le Stopwatch/Zhonya immédiatement lorsque Zed utilise son R sur vous, afin de ne subir aucun dégât, mais si vous pouvez survivre à ses dégâts initiaux et infliger quelques dégâts/CC utiles, vous devriez utiliser le Stopwatch/Zhonya dans les 3 secondes après qu'il ait utilisé son R afin de ne pas subir les dégâts de son ultime. Si vous avez l'Exhaust, vous devriez généralement l'utiliser immédiatement lorsque Zed atterrit de son ultime.    " << std::endl;
    std::cout << "Il est très efficace de se concentrer sur l'armure contre Zed, vous devriez donc construire Tear -> Cloth Armor -> Seeker's Armguard (si Zed est bon). Le Stopwatch est utile si l'ennemi Zed ouvre avec son ultime, mais s'il est bon, il cherchera généralement plutôt à vous réduire avec ses capacités de base. Vous pouvez accélérer le Zhonya complet si vous en avez besoin, mais vous perdrez du pouvoir de waveclear en faisant cela. Vous devriez généralement acheter le Stopwatch/Zhonya plus tard, sauf si Zed est trop faible/vous avez un très bon peel. Le Riftmaker aide à soutenir son harcèlement et à le vaincre dans les duels, et l'Everfrost peut l'aider à exploser et à le neutraliser après qu'il a utilisé son ultime." << std::endl;
    std::cout << "Summoners: Flash/Exhaust/Tp" << std::endl;


    }

    else if (enemyChampion == "Ziggs") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Ziggs est un champion AP (ap 95% || ad 4%) " << std::endl;
   


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Périodiquement, la prochaine auto de Ziggs inflige des dégâts magiques supplémentaires. Ce délai est réduit quand Ziggs utilise une compétence. 12s"  << std::endl;
    std::cout << "Q = Ziggs lance une bombe rebondissante qui inflige des dégâts magiques. 6/5.5/5/4.5/4s " << std::endl;
    std::cout << "W =(C4 qui lui permet de jump) Ziggs jette une charge explosive qui explose au bout de 4 sec ou quand vous réactivez cette compétence. L'explosion inflige des dégâts magiques aux ennemis et les repousse. Ziggs aussi est repoussé mais il ne subit aucun dégât. Ziggs peut utiliser cette charge pour exploser les tourelles ennemies vulnérables. 20/18/16/14/12s  " << std::endl;
    std::cout << "E = Ziggs disperse des mines de proximité qui explosent au contact des ennemis, leur infligeant des dégâts magiques et les ralentissant. Quand un ennemi déclenche une mine, les mines supplémentaires lui infligent des dégâts réduits. 16s  " << std::endl;
    std::cout << "R = Enorme bombe Ziggs déploie sa création ultime, la Méga bombe infernale, et la lance de très loin. Les ennemis dans la zone d'impact principale subissent plus de dégâts que les ennemis plus éloignés. 120/95/70s  " << std::endl;
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Matchup favorable à Cassiopeia. Cassio peut utiliser sa range pour poke Ziggs. Son Q avec un temps de recharge de 6 à 4 secondes inflige des dégâts dans une petite zone autour des ennemis touchés, donc ne vous tenez pas trop près des sbires. C'est sa principale source de dégâts, alors cherchez à trade pendant qu'il est en temps de recharge ou si vous pouvez l'éviter. Son W avec un temps de recharge de 20 secondes est sa principale capacité défensive contre vous. Il peut éventuellement vous repousser vers son Q ou E proches. S'il se tient dessus, cela le repousse à moins qu'il ne soit stuns/emprisonné. Son E avec un temps de recharge de 16 secondes est principalement un outil de zone. Essayez de marcher autour, mais cela vaut la peine de prendre des dégâts de quelques mines pour éviter ses autres capacités/lui infliger des dégâts vous-même. Son ultime inflige plus de dégâts dans son centre. Il a une portée extrêmement longue (5000), mais met plus de temps à se déplacer plus loin de l'endroit où il est lancé.    " << std::endl;
    std::cout << "Les items defensif ne devrait pas être necessaire mais armor dans le doute" << std::endl;
    std::cout << "Flash/Barrier/Tp" << std::endl;


    }


    else if (enemyChampion == "Zoe") {

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Zoe est un champion AP (ap 77% || ad 9%) " << std::endl;
  


    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Passif = Après avoir lancé une compétence, la prochaine attaque de base de Zoé inflige des dégâts magiques supplémentaires. " << std::endl;
    std::cout << "Q = Projectile qu'elle peut rediriger en vol. Les dégâts augmentent avec la distance parcourue en ligne droite. 8.5/8/7.5/7/6.5s " << std::endl;
    std::cout << "W = Ballon contenant des summoners spells (Quand Zoé utilise un sort d'invocateur, elle tire aussi trois projectiles sur l'ennemi le plus proche)  " << std::endl;
    std::cout << "E = Tire une balle qui fait s'endormir puis  stuns (Tant que la cible dort, sa résistance magique est réduite. Les dégâts qui réveillent la cible sont doublés, jusqu'à un montant max.) 16/15/14/13/12s" << std::endl;
    std::cout << "R =Trou noir qui téléporte Zoé à un endroit proche pendant 1 sec, avant de la faire revenir à son point de départ. 11/8/5s  " << std::endl;
   
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Machup en faveur de Zoe. Le matchup est équilibré avant le lvl 6, mais Zoe peut optenir des Summoners puissant avec son W pour lui donner un léger avantage. Après le niveau 6, Zoe  a plus de puissance lors des trades 1v1, Mais Cassio a les outils pour survivire. Son Q inflige des dégâts dans une petite zone autour des ennemis touchés, donc ne vous tenez pas trop près des sbires. Il inflige plus de dégâts plus il parcourt de distance et c'est sa principale source de dégâts. Son W lui permet de récupérer des summoners spells et les actifs d'objets que vous ou votre équipe utilisez, ainsi que ceux des sbires qu'elle tue et qui ont des ballons ; un seul est disponible pendant 1 minute. Utiliser ces sorts ou ses propres sorts d'invocateur lui donne de la vitesse de déplacement et un peu de dégâts. Évitez de combattre tôt quand elle a un summoners disponible à moins que vous n'ayez un avantage massif, comme toutes ses autres capacités étant en temps de recharge. Son E est sa plus grande menace à moins que son Q soit en CD (il ne sera pas disponible pendant que vous êtes en CC) il sera worth de Cleanse à moins que Zoe ne puisse pas Q max rnage pour followup. Son ULT est un téléport qui la fait revenir à son emplacement d'origine 1 seconde plus tard, donc vous devriez économiser vos compétences pour là où elle va atterrir à moins que vous ne puissiez la toucher dès qu'elle utilise son ultime. Elle peut l'utiliser pour augmenter la portée (et donc augmenter les dégâts) de son Q et pour s'approcher pour son E, donc vous devriez vous tenir derrière les sbires, mais soyez prêt à vous éloigner d'eux quand Zoe utilise son Q. Vous pouvez utiliser votre ultime quand elle utilise son ultime vers l'avant, mais elle peut aussi se retourner, donc cela vaut la peine de le faire seulement si vous serez puni si elle atterrit son E, ou si vous êtes capable de la poursuivre après qu'elle soit revenue à son emplacement d'origine.   " << std::endl;
    std::cout << "La mr et les pv son tout deux efficaces, le Rylai aide à se coller a Zoe  surtout à cause de sa vitesse de déplacement supplémentaire et de ses Flashes potentielles de son W. " << std::endl;
    std::cout << "Summoners : Flash/Cleanse" << std::endl;

    }




    else {
        std::cout << "Je n'ai pas de conseils pour battre ce champion." << std::endl;
    }
}


int main() {
    SetConsoleOutputCP(1252); //définit le codage de la page de code de sortie de la console  en Latin-1 (ici sert à afficher les accents sur le cmd windows)
    SetConsoleCP(1252); //définit le codage de la page de code d'entrée de la console Cette ligne assure que les caractères saisis par l'utilisateur via std::cin seront interprétés correctement avec le codage 1252.
    
  
    
    
    initializeChampionRoles();

    //Vérifier si un champion est un contre de Cassiopeia
    std::string enemyChampion;
    std::cout << "Entrez le nom d'un champion : ";
    std::cin >> enemyChampion;

    if (isCounter(enemyChampion)) {
        std::cout << enemyChampion << " est un counter de Cassiopeia." << std::endl;
        std::cout << "Méthodes pour le/la battre : " << std::endl;
        printCounterMethods(enemyChampion);
    }
    else {
        std::cout << enemyChampion << " n'est pas un counter de Cassiopeia." << std::endl;
        std::cout << "Méthodes pour le/la battre : " << std::endl;
        printCounterMethods(enemyChampion);
    }

    
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

    std::cout << "Summoners: Flash 300s = 5min || Heal 240s = 4min || Ghost 210s = 3.5min || Barrier 180s = 3min || Exhaust 210s = 3.5min || Tp 360s = 6min || Cleanse 210s = 3.5min || Ignite 180s = 3min";
    std::cout << std::endl;
    std::cout << std::endl;
   
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Made by Nonolp v1.0" << std::endl;

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Appuyez sur Entrée pour quitter...";
    std::cin.ignore(); // Ignorer le premier caractère (le '\n' après avoir appuyé sur Entrée)
    std::cin.get();    // Attendre qu'un caractère soit entré

   
    return 0;

}
