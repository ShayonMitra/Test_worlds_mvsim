import re
import json


def parse_xml_to_json(xml_file):
    with open(xml_file, 'r') as file:
        xml_content = file.read()

    #regex pattern(idk)
    block_pattern = r'<block[^>]*class="([^"]+)"[^>]*>\s*<init_pose>([^<]+)</init_pose>'
    
    matches = re.findall(block_pattern, xml_content)
    objects_coordinates = {}

    for match in matches:
        class_name = match[0]
        init_pose = match[1]
        coordinates = tuple(map(float, init_pose.split()))  #convert coordinates to a tuple of floats

        if class_name not in objects_coordinates:
            objects_coordinates[class_name] = []
        objects_coordinates[class_name].append(coordinates)

    return json.dumps(objects_coordinates, indent=4)

#test
xml_file = 'demo_office1_4bots.world.xml' 
json_data = parse_xml_to_json(xml_file)

with open("demo_office1_4bots.json", "w") as outfile:
    outfile.write(json_data)
print(json_data)
