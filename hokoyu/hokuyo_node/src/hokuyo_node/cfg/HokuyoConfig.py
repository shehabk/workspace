## *********************************************************
## 
## File autogenerated for the hokuyo_node package 
## by the dynamic_reconfigure package.
## Please do not edit.
## 
## ********************************************************/

##**********************************************************
## Software License Agreement (BSD License)
##
##  Copyright (c) 2008, Willow Garage, Inc.
##  All rights reserved.
##
##  Redistribution and use in source and binary forms, with or without
##  modification, are permitted provided that the following conditions
##  are met:
##
##   * Redistributions of source code must retain the above copyright
##     notice, this list of conditions and the following disclaimer.
##   * Redistributions in binary form must reproduce the above
##     copyright notice, this list of conditions and the following
##     disclaimer in the documentation and/or other materials provided
##     with the distribution.
##   * Neither the name of the Willow Garage nor the names of its
##     contributors may be used to endorse or promote products derived
##     from this software without specific prior written permission.
##
##  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
##  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
##  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
##  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
##  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
##  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
##  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
##  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
##  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
##  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
##  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
##  POSSIBILITY OF SUCH DAMAGE.
##**********************************************************/

config_description = [{'srcline': 46, 'description': 'The angle of the first range measurement. The unit depends on ~ang_radians.', 'max': 3.141592653589793, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Hokuyo.cfg', 'name': 'min_ang', 'edit_method': '', 'default': -1.5707963267948966, 'level': 1, 'min': -3.141592653589793, 'type': 'double'}, {'srcline': 47, 'description': 'The angle of the first range measurement. The unit depends on ~ang_radians.', 'max': 3.141592653589793, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Hokuyo.cfg', 'name': 'max_ang', 'edit_method': '', 'default': 1.5707963267948966, 'level': 1, 'min': -3.141592653589793, 'type': 'double'}, {'srcline': 48, 'description': 'Whether or not the hokuyo returns intensity values.', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '../cfg/Hokuyo.cfg', 'name': 'intensity', 'edit_method': '', 'default': False, 'level': 1, 'min': False, 'type': 'bool'}, {'srcline': 49, 'description': 'The number of adjacent range measurements to cluster into a single reading', 'max': 99, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '../cfg/Hokuyo.cfg', 'name': 'cluster', 'edit_method': '', 'default': 1, 'level': 1, 'min': 0, 'type': 'int'}, {'srcline': 50, 'description': 'The number of scans to skip between each measured scan', 'max': 9, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '../cfg/Hokuyo.cfg', 'name': 'skip', 'edit_method': '', 'default': 0, 'level': 1, 'min': 0, 'type': 'int'}, {'srcline': 51, 'description': 'The serial port where the hokuyo device can be found', 'max': '', 'cconsttype': 'const char * const', 'ctype': 'std::string', 'srcfile': '../cfg/Hokuyo.cfg', 'name': 'port', 'edit_method': '', 'default': '/dev/ttyACM0', 'level': 3, 'min': '', 'type': 'str'}, {'srcline': 52, 'description': "Whether the node should calibrate the hokuyo's time offset", 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '../cfg/Hokuyo.cfg', 'name': 'calibrate_time', 'edit_method': '', 'default': True, 'level': 3, 'min': False, 'type': 'bool'}, {'srcline': 53, 'description': 'The frame in which laser scans will be returned', 'max': '', 'cconsttype': 'const char * const', 'ctype': 'std::string', 'srcfile': '../cfg/Hokuyo.cfg', 'name': 'frame_id', 'edit_method': '', 'default': 'laser', 'level': 0, 'min': '', 'type': 'str'}, {'srcline': 54, 'description': 'An offet to add to the timestamp before publication of a scan', 'max': 0.25, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '../cfg/Hokuyo.cfg', 'name': 'time_offset', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': -0.25, 'type': 'double'}, {'srcline': 55, 'description': 'Turn this on if you wish to use the UTM-30LX with an unsafe angular range. Turning this option on may cause occasional crashes or bad data. This option is a tempory workaround that will hopefully be removed in an upcoming driver version.', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '../cfg/Hokuyo.cfg', 'name': 'allow_unsafe_settings', 'edit_method': '', 'default': False, 'level': 3, 'min': False, 'type': 'bool'}]

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

for param in config_description:
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']
