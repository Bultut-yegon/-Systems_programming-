from abc import ABC, abstractmethod
class Kenya(ABC):
    def economy(self):
        status=input("Enter the status of the economy in Kenya after parliament destructions").lower()
        print('status')
        coup=True
        while Githurai_massacre==coup:
            chaos=input("What do you think happened in Githurai betwee 7:30 pm and 10 pm on 25/6/2024?\n 1. Nothing \n 2. People were injured and others killed.\n 3. I'm not aware")
            if chaos==1:
                print('You are not Gen Z then what have you benn hearing all along then. \n anyway just shut up')
                exit(0)
            elif chaos ==2:
                print("You are with us now. lemme give you an hint even if you already know")
                
                print('Coups was involved in that bad incident')
                print("We need fair amd reasonable government. Otherwise we will occupy state house as Gen Z's")
                print("We don't want our leaders to insult our intelligence.\n First, why was the media threatened at around 5:30 pm?")
                print("We need transparent government. We are not after tribalism at all as gen Z's")
            elif chaos==3:
                print('Just focus on what you know')
                Githurai_massacre!=coup
                
            else:
                print("Incorrect input. Please enter 1, 2 or 3")
                
    def parliament(self):
        print('Five people were reported to have been killed near the parliamnet \nbefore the Gen Z broke into the parliamnt')  
        print('The coat of the Speaker was taken by one Gen Z who was later \nshot by a sniper who was reported to have been up the KICC building')  
        print('Mace was also taken. So the simple of authority, \n was tempered and the guy reported to have been killed')  
        
    @abstractmethod
    def opinion(self):
        print('We need to be alert because this government is comprised of thieves, gang of public property looters')  
        print("The lesson I learned is that \n When a leader cries, that doesn't mean that he  or she is good. \npeople are looking for sympathy votes out here")
        print('We always appreciate our unity as Gen Z generation')                  
class Cities(Kenya):
    def Nairobi(self):
        print("Nairobi is the best county and city in Kenya. ")  
        print("Contributes to about 50% of Kenya's GDP")  
    def opinion(self):
        # return super().opinion() 
        return "We don't want dictators in Kenya right now. \nWe are not fools"  
    
# generation_z=Kenya()

city=Cities()
# print(city.opinion())
# print(generation_z.opinion )

def small(known):
    known.Nairobi()
    known.opinion()
    
small(city)
    
    
            
            