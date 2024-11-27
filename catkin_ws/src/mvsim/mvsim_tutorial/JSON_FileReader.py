import json 

class JSONGoalReader:
    def __init__(self, fileName : str):
        self.file = open(fileName)
        self.data = json.load(self.file)
    
    def show(self):
        print(self.data)

if __name__=="__main__":
    reader = JSONGoalReader("/home/skanda/InterIIT/Test_worlds_mvsim/catkin_ws/src/mvsim/mvsim_tutorial/demo_office1_4bots.json")
    reader.show()

# Task locations
# Agent locations
# Task allocation after assigning
# Flag for task completion