#include <stdio.h>
#include <string.h>

int main(void)
{
    char nickname[100];
    int virtually, n, m, o, p, q, r, s, t;

    printf("Welcome 2 ideas\n");
    printf("Enter your nick name:\n");
    scanf("%99s", nickname);

    printf("%s, you want to spend your time?\n", nickname);
    printf("1. virtually\t2. physically\t3. exit\n");

    if (scanf("%d", &virtually) != 1) {
        printf("invalid input. please enter a number\n");
        return 1;
    }

    if (virtually == 3) {
        printf("goodbye, %s!\n", nickname);
    }
    else if (virtually == 1) {
        printf("you want to see----\n"
               "1. Animations\n"
               "2. Dramas\n"
               "3. Comedy\n"
               "4. Movies\n"
               "5. Musics\n");

        if (scanf("%d", &n) != 1) {
            printf("invalid input.\n");
            return 1;
        }

        switch (n) {
        case 1: /* Animations */
            printf("wow!!!! interesting choice!!!!\n");
            printf("1. Japanese\n"
                   "2. Korean\n"
                   "3. US\n"
                   "4. Canada\n"
                   "5. UK\n"
                   "6. France\n"
                   "7. Brazil\n");
            printf("enter your choice:\n");
            scanf("%d", &r);

            switch (r) {
            case 1: /* Japanese animations */
                printf("1. Death note\n"
                       "2. Naruto\n"
                       "3. One piece\n"
                       "4. Fruits Basket\n"
                       "5. A sign of affection\n"
                       "6. A condition called love\n"
                       "7. Bleach\n"
                       "8. Akira\n"
                       "9. Your Name\n"
                       "10. Princess Mononoke\n"
                       "11. Porco Rosso\n"
                       "12. Pom Poko\n"
                       "13. The Girl Who Leapt Through Time\n"
                       "14. Tokyo Godfathers\n"
                       "15. My Neighbour Totoro\n"
                       "16. Paprika\n"
                       "17. Ponyo\n"
                       "18. Castle in the Sky\n"
                       "19. The Cat Returns\n"
                       "20. Ninja Scroll\n");
                break;

            case 2: /* Korean animations */
                printf("1. General Ttoli\n"
                       "2. Dooly the Dinosaur\n"
                       "3. Jett\n"
                       "4. My Beautiful Girl Mari\n"
                       "5. Solo Leveling\n"
                       "6. Tower of God\n"
                       "7. Let's Play\n"
                       "8. Noblesse\n"
                       "9. I Love Yoo\n"
                       "10. Bastard\n"
                       "11. The Gamer\n"
                       "12. Jason-Turning Mecard\n"
                       "13. Marinette-Miraculous: Tales of Ladybug & Cat Noir\n"
                       "14. Kay-Robot Trains\n"
                       "15. Mimi-Canimals\n"
                       "16. Amber\n"
                       "17. Red and Yellow-Larva\n"
                       "18. Ryan-Kakao Friends\n"
                       "19. Tobot X-Tobot\n"
                       "20. Tayo-Tayo the Little Bus\n");
                break;

            case 3: /* US animations */
                printf("1. A Bunch of Munsch\n"
                       "2. A little Curious\n"
                       "3. Baby Looney Tunes\n"
                       "4. Baby Shark's Big Show!\n"
                       "5. Bad Dog\n"
                       "6. Barbie Mysteries: The Great Horse Chase\n"
                       "7. Big Baby\n"
                       "8. Camp Candy\n"
                       "9. Care Bears\n"
                       "10. Diaries\n"
                       "11. Dino Pop!\n"
                       "12. Dinozaurs\n"
                       "13. Eagle Riders\n"
                       "14. Ever After High\n"
                       "15. F Is for Family\n"
                       "16. Family Gog\n"
                       "17. Gane Over\n"
                       "18. Gary & Mike\n"
                       "19. Genesis\n"
                       "20. Godzilla\n");
                break;

            case 4: /* Canadian animations */
                printf("1. Abby Hatcher\n"
                       "2. Ace Lightning\n"
                       "3. Action Man\n"
                       "4. Alien TV\n"
                       "5. Anatole\n"
                       "6. Arthur\n"
                       "7. Babar\n"
                       "8. Bali\n"
                       "9. Bamboo Love\n"
                       "10. Barbie: It Takes Two\n"
                       "11. The Basketvilles\n"
                       "12. Birdz\n"
                       "13. The Boy\n"
                       "14. Caillou\n"
                       "15. Captain Star\n"
                       "16. Caroon Sushi\n"
                       "17. Chaotic\n"
                       "18. Danger Mouse\n"
                       "19. The Eggs\n"
                       "20. Family Dog\n");
                break;

            case 5: /* UK animations */
                printf("1. Corpse Bird\n"
                       "2. Orion and the Dark\n"
                       "3. Howl's Moving Castle\n"
                       "4. The Sea Beast\n"
                       "5. How to Train Dragon 2\n"
                       "6. Klaus\n"
                       "7. Chicken Run: Dawn of the Nugget\n"
                       "8. The House\n"
                       "9. Back to the Outback\n"
                       "10. Jungle Beat\n"
                       "11. The Willoughbys\n"
                       "12. Riverdance\n"
                       "13. Animal Crackers\n"
                       "14. Pets United\n"
                       "15. Robin Robin\n"
                       "16. Minions & More 1\n"
                       "17. Gnome Alone\n"
                       "18. Octonauts\n"
                       "19. Cat Burglar\n"
                       "20. A StoryBots Christmas\n");
                break;

            case 6: /* France animations */
                printf("1. A Monster in Paris\n"
                       "2. Le Petit Nicolas\n"
                       "3. Azur et Asmar\n"
                       "4. Le Roman de Renart\n"
                       "5. Persepolis\n"
                       "6. Une Vie de Chat\n"
                       "7. Gandahar\n"
                       "8. Eelleville Elfrid\n"
                       "9. U\n"
                       "10. Le Chat du Rabbin\n");
                break;

            case 7: /* Brazil animations */
                printf("1. Rio 2096\n"
                       "2. Sitio do Picapau\n"
                       "3. Monica's Gang\n"
                       "4. Haunted Tales for Wicked Kids\n"
                       "5. Jorel's Brother\n");
                break;

            default:
                printf("invalid choice. please try again. thank you.\n");
            }
            break;

        case 2: /* Dramas */
            printf("aaahuh!!!!\n");
            printf("1. Chinese\n"
                   "2. Japanese\n"
                   "3. Korean\n"
                   "4. British\n"
                   "5. Spanish\n");
            printf("enter your choice:\n");
            scanf("%d", &m);

            switch (m) {
            case 1: /* C-drama */
                printf("Welcome to C-Drama\n");
                printf("1. Put your head on my shoulder\n"
                       "2. Go Ahead\n"
                       "3. Our Secret\n"
                       "4. Arsenal Military Academy\n"
                       "5. Forever and ever\n"
                       "6. Begin Again\n"
                       "7. Unforgettable Love\n");
                break;

            case 2: /* J-drama */
                printf("welcome to J-Drama\n");
                printf("1. Romance\n"
                       "2. Mystery & Thriller\n"
                       "3. Comedy\n"
                       "4. Historical\n"
                       "5. Slice of Life\n"
                       "6. Fantasy\n"
                       "7. Inspirational\n");
                printf("enter your choice\n");
                scanf("%d", &o);

                switch (o) {
                case 1: /* Romance J-drama */
                    printf("1. Boys Over Flowers\n"
                           "2. Love in Tokyo\n"
                           "3. Love Lasts Forever\n"
                           "4. An Incurable Case of Love\n"
                           "5. Love and Fortune\n"
                           "6. First Love\n"
                           "7. Meet Me After School\n"
                           "8. I will be your bloom\n"
                           "9. Good Morning Call\n"
                           "10. Dear Sa-chan\n"
                           "11. Chastity High\n"
                           "12. From Me to You: Kimi ni Todoke\n"
                           "13. 1122: For a Happy Marriage\n"
                           "14. Eye Love You\n"
                           "15. I Can't Reach You\n");
                    break;

                case 2: /* Mystery */
                    printf("1. Unnatural\n"
                           "2. Liar Game\n"
                           "3. Hanzawa Naoki\n"
                           "4. Alice in Borderland\n"
                           "5. Burn the House Down\n"
                           "6. Dearest\n"
                           "7. Re:Mind\n"
                           "8. MIU404\n"
                           "9. The Forest of Love\n"
                           "10. Giri/Haji\n"
                           "11. Heaven and Hell: Soul Exchange\n"
                           "12. Giver Taker\n"
                           "13. 100-manen no Onna-tachi\n"
                           "14. Gannibal\n"
                           "15. Siren\n");
                    break;

                case 3: /* Comedy */
                    printf("1. We Married as a Job\n"
                           "2. Gokusen\n");
                    break;

                case 4: /* Historical */
                    printf("1. Jin\n"
                           "2. Segodon\n");
                    break;

                case 5: /* Slice of life */
                    printf("1. Midnight Diner\n"
                           "2. My Husband Won't Fit\n");
                    break;

                case 6: /* Fantasy */
                    printf("1. Your Turn to Kill\n"
                           "2. Erased\n");
                    break;

                case 7: /* Inspirational */
                    printf("1. Code Blue\n"
                           "2. Dragon Zakura\n");
                    break;

                default:
                    printf("invalid choice. please try again. thank you.\n");
                }
                break;

            case 3: /* K-drama */
                printf("welcome to K-Drama\n");
                printf("1. King The Land\n"
                       "2. It's Okay not to be ok\n"
                       "3. The Legend of the blue sea\n"
                       "4. Vincenzo\n"
                       "5. Wonderland\n"
                       "6. Big Mouth\n"
                       "7. Family by choice\n"
                       "8. Moon Lovers\n"
                       "9. Queen of tears\n"
                       "10. Lovely Runner\n"
                       "11. Brewing love\n"
                       "12. Marry My Husband\n");
                break;

            case 4: /* British drama */
                printf("Welcome to British-Drama\n");
                printf("1. Game Of Thrones\n"
                       "2. Bridgerton\n"
                       "3. Breaking Bad\n"
                       "4. The Vampire Diaries\n"
                       "5. Loki\n"
                       "6. Grantchester\n"
                       "7. The Artful Dodger\n"
                       "8. Sanditon\n"
                       "9. House of the Dragon\n"
                       "10. Sherlock Holmes\n");
                break;

            case 5: /* Spanish drama */
                printf("Welcome to Spanish-Drama\n");
                printf("1. Money Heist\n"
                       "2. Elite\n"
                       "3. Welcome to Eden\n"
                       "4. Berlin\n"
                       "5. El Chapo\n"
                       "6. Someone Has to Die\n"
                       "7. Los Farad\n"
                       "8. Hache\n"
                       "9. Iron Reign\n");
                break;

            default:
                printf("invalid choice. please try again. thank you.\n");
            }
            break;

        case 3: /* Comedy */
            printf("ha ha ha,,,\n");
            printf("1. Charlie Chaplin 3\n"
                   "2. Mr. Bean\n"
                   "3. Bhul Bhulaya\n"
                   "4. PK\n"
                   "5. Kungfu Panda\n"
                   "6. Stree 2\n"
                   "7. Pagal Panti\n"
                   "8. Tamasha\n"
                   "9. Sweet & Sour\n"
                   "10. Jailer\n");
            break;

        case 4: /* Movies */
            printf("long day? huh???\n");
            printf("1. Hindi\n"
                   "2. English\n"
                   "3. Japanese\n"
                   "4. Korean\n"
                   "5. Chinese\n"
                   "6. Bangla\n"
                   "7. Turkish\n");
            printf("Enter your choice:\n");
            scanf("%d", &p);

            switch (p) {
            case 1: /* Hindi movies */
                printf("1. Bahubali the beginning\n"
                       "2. Bahubali the conclusion\n"
                       "3. KGF-chapter1\n"
                       "4. KGF chapter2\n"
                       "5. Lagaan\n"
                       "6. Dilwale\n"
                       "7. ABCD\n"
                       "8. 3 Idiots\n"
                       "9. Pathan\n"
                       "10. Janata Garage\n");
                break;

            case 2: /* English movies */
                printf("1. Avengers Infinity War\n"
                       "2. Captain America: the first avenger\n"
                       "3. The Notebook 2\n"
                       "4. Ironman 1\n"
                       "5. Interstellar\n"
                       "6. The Avengers\n"
                       "7. Oppenheimer\n"
                       "8. Inception\n"
                       "9. The Incredible Hulk\n"
                       "10. Godfather\n"
                       "11. The Matrix\n"
                       "12. How to Lose a Guy in 10 Days\n"
                       "13. 10 Things I Hate About You\n"
                       "14. Ant-Man\n"
                       "15. Doctor Strange\n"
                       "16. Thor: Ragnarok\n"
                       "17. Spiderman\n"
                       "18. Red Notice\n"
                       "19. Avengers: Endgame\n"
                       "20. The Gray Man\n");
                break;

            case 3: /* Japanese movies */
                printf("1. Akira\n"
                       "2. Seven Samurai\n"
                       "3. Spirited Away\n"
                       "4. My Neighbor Totoro\n"
                       "5. Princess Mononoke\n"
                       "6. Harakiri\n"
                       "7. Your Name\n"
                       "8. Perfect Blue\n"
                       "9. Audition\n"
                       "10. Tokyo Story\n"
                       "11. Ikiru\n");
                break;

            case 4: /* Korean movies */
                printf("1. Carter\n"
                       "2. Revenger\n"
                       "3. Jung E\n"
                       "4. Okja\n"
                       "5. Believer\n"
                       "6. Time to Hunt\n"
                       "7. Cyber Hell\n"
                       "8. Seoul Vibe\n"
                       "9. The Bros\n"
                       "10. Dream\n");
                break;

            case 5: /* Chinese movies */
                printf("1. Man in Love\n"
                       "2. YOLO\n"
                       "3. Made in China\n"
                       "4. Lost in the Stars\n"
                       "5. Nice View\n"
                       "6. Love O2O\n"
                       "7. Us and Them\n"
                       "8. The Wandering Earth\n"
                       "9. Incantation\n"
                       "10. Kingdom\n"
                       "11. No More Bets\n");
                break;

            case 6: /* Bangla movies */
                printf("1. Jibon Theke Neya\n"
                       "2. Pather Panchali\n"
                       "3. Ballabhpurer Roopkotha\n"
                       "4. Monpura\n"
                       "5. Aparajito\n"
                       "6. Chengiz\n"
                       "7. Projapoti\n"
                       "8. Aynabaji\n"
                       "9. Hatyapuri\n"
                       "10. Bohurupi\n");
                break;

            case 7: /* Turkish movies */
                printf("1. Art of Love\n"
                       "2. Ashes\n"
                       "3. Bhter\n"
                       "4. Miracle in Cell No. 7\n"
                       "5. A True Gentleman\n"
                       "6. Love Tactics\n"
                       "7. Grudge\n"
                       "8. Chokehold\n"
                       "9. Cici\n"
                       "10. Oregon\n");
                break;

            default:
                printf("invalid choice. please try again. thank you.\n");
            }
            break;

        case 5: /* Music */
            printf("finding peace of mind??? keep going...\n");
            printf("wanna listen---\n"
                   "1. Bangla\n"
                   "2. Hindi\n"
                   "3. English\n");
            printf("enter your choice:\n");
            scanf("%d", &q);

            switch (q) {
            case 1: /* Bangla music */
                printf("1. Amaro porano jaha chai\n"
                       "2. O amar desher mati\n"
                       "3. Nildoria\n"
                       "4. Coffee houser shei addata\n"
                       "5. Mayabono biharini horini\n"
                       "6. Khola janala\n"
                       "7. Shironamhin\n"
                       "8. Shorolotar protima\n"
                       "9. Chol bondhu chol\n"
                       "10. Aalo\n");
                break;

            case 2: /* Hindi music */
                printf("1. Kaise Hua\n"
                       "2. Behti Hawa Sa Tha Woh\n"
                       "3. Tujh Jo Mila\n"
                       "4. Jaab Thak Jaha Mein Subah Sham Hei\n"
                       "5. Saaiya\n"
                       "6. Keisen Bataye\n"
                       "7. Kesariya\n"
                       "8. Chaleya\n"
                       "9. Husb\n"
                       "10. Ishq\n");
                break;

            case 3: /* English music */
                printf("1. Runaway\n"
                       "2. Perfect\n"
                       "3. My Heart Will Go On\n"
                       "4. Baby\n"
                       "5. Snow Man\n"
                       "6. Unstoppable\n"
                       "7. Cheri Cheri Lady\n"
                       "8. A Thousand Years\n"
                       "9. Let Me Down Slowly\n"
                       "10. Senorita\n");
                break;

            default:
                printf("invalid choice. please try again. thank you.\n");
            }
            break;

        default:
            printf("invalid choice. please try again. thank you.\n");
        }
    }
    else if (virtually == 2) {
        printf("you want to do----\n"
               "1. Crafts\n"
               "2. Cooking\n"
               "3. Workout\n"
               "4. Gardening\n"
               "5. Driving\n");
        printf("enter your choice\n");
        scanf("%d", &s);

        switch (s) {
        case 1: /* Crafts */
            printf("you can try to make,,\n");
            printf("1. Flowers\n"
                   "2. Butterfly\n"
                   "3. Lantern\n"
                   "4. Stars 3D\n"
                   "5. Garland\n"
                   "6. Pinwheels\n"
                   "7. Weaving\n"
                   "8. Bunny\n"
                   "9. Fish\n"
                   "10. Bee\n");
            break;

        case 2: /* Cooking */
            printf("you want to make:\n"
                   "1. desert\n"
                   "2. main course\n"
                   "3. snacks\n");
            printf("enter your choice:\n");
            scanf("%d", &t);

            switch (t) {
            case 1: /* Dessert */
                printf("1. Shrikand\n"
                       "2. Boondi\n"
                       "3. Balushahi\n"
                       "4. Bread pudding\n"
                       "5. Waffle\n"
                       "6. Cupcake\n"
                       "7. Macarons\n"
                       "8. Brownie\n"
                       "9. Truffles\n"
                       "10. Tiramisu\n");
                break;

            case 2: /* Main course */
                printf("1. Beef curry\n"
                       "2. Kebab\n"
                       "3. Kosha mangsho\n"
                       "4. Shorshe ilish\n"
                       "5. Gravy chicken\n"
                       "6. Mejbani mangsho\n"
                       "7. Morog polao\n"
                       "8. Khichuri\n"
                       "9. Pulao\n"
                       "10. Fried rice\n");
                break;

            case 3: /* Snacks */
                printf("1. Potato chips\n"
                       "2. Vada pav\n"
                       "3. Banana chips\n"
                       "4. Pakora\n"
                       "5. Dried fruits\n"
                       "6. Chotpoti\n"
                       "7. Fuchka\n"
                       "8. Paratha\n"
                       "9. Haleem\n"
                       "10. Singara\n");
                break;

            default:
                printf("invalid choice. please try again. thank you.\n");
            }
            break;

        case 3: /* Workout */
            printf("1. Deadlift\n"
                   "2. Dumbbell bench press\n"
                   "3. Plank\n"
                   "4. Pushups\n"
                   "5. Squat\n"
                   "6. Decline push up\n"
                   "7. Bicep curl\n"
                   "8. Pull-up\n"
                   "9. Triceps\n"
                   "10. Lunge\n");
            break;

        case 4: /* Gardening */
            printf("1. Compost\n"
                   "2. Cover crops\n"
                   "3. Mulch\n"
                   "4. Divide large perennials\n"
                   "5. Flower bulbs\n"
                   "6. Clean garden furniture\n"
                   "7. Plant vegetables\n"
                   "8. Save seeds\n"
                   "9. Sow\n"
                   "10. Weed\n");
            break;

        case 5: /* Driving */
            printf("you can drive different branded cars,,,like\n");
            printf("1. Audi\n"
                   "2. Volvo\n"
                   "3. Tesla\n"
                   "4. Hyundai\n"
                   "5. Toyota\n"
                   "6. Mitsubishi\n"
                   "7. Lexus\n"
                   "8. Ferrari\n"
                   "9. Nissan\n"
                   "10. Lamborghini\n");
            break;

        default:
            printf("invalid choice. please try again. thank you.\n");
        }
    }
    else {
        printf("invalid choice. please try again. thank you.\n");
    }

    return 0;
}
