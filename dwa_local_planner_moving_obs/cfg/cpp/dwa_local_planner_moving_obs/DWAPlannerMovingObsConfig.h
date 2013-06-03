//#line 2 "/opt/ros/electric/stacks/driver_common/dynamic_reconfigure/templates/ConfigType.h"
// *********************************************************
// 
// File autogenerated for the dwa_local_planner_moving_obs package 
// by the dynamic_reconfigure package.
// Please do not edit.
// 
// ********************************************************/

/***********************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2008, Willow Garage, Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of the Willow Garage nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 ***********************************************************/

// Author: Blaise Gassend


#ifndef __dwa_local_planner_moving_obs__DWAPLANNERMOVINGOBSCONFIG_H__
#define __dwa_local_planner_moving_obs__DWAPLANNERMOVINGOBSCONFIG_H__

#include <dynamic_reconfigure/config_tools.h>
#include <limits>
#include <ros/node_handle.h>
#include <dynamic_reconfigure/ConfigDescription.h>
#include <dynamic_reconfigure/ParamDescription.h>
#include <dynamic_reconfigure/config_init_mutex.h>

namespace dwa_local_planner_moving_obs
{
  class DWAPlannerMovingObsConfigStatics;
  
  class DWAPlannerMovingObsConfig
  {
  public:
    class AbstractParamDescription : public dynamic_reconfigure::ParamDescription
    {
    public:
      AbstractParamDescription(std::string n, std::string t, uint32_t l, 
          std::string d, std::string e)
      {
        name = n;
        type = t;
        level = l;
        description = d;
        edit_method = e;
      }
      
      virtual void clamp(DWAPlannerMovingObsConfig &config, const DWAPlannerMovingObsConfig &max, const DWAPlannerMovingObsConfig &min) const = 0;
      virtual void calcLevel(uint32_t &level, const DWAPlannerMovingObsConfig &config1, const DWAPlannerMovingObsConfig &config2) const = 0;
      virtual void fromServer(const ros::NodeHandle &nh, DWAPlannerMovingObsConfig &config) const = 0;
      virtual void toServer(const ros::NodeHandle &nh, const DWAPlannerMovingObsConfig &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, DWAPlannerMovingObsConfig &config) const = 0;
      virtual void toMessage(dynamic_reconfigure::Config &msg, const DWAPlannerMovingObsConfig &config) const = 0;
    };

    typedef boost::shared_ptr<AbstractParamDescription> AbstractParamDescriptionPtr;
    typedef boost::shared_ptr<const AbstractParamDescription> AbstractParamDescriptionConstPtr;
    
    template <class T>
    class ParamDescription : public AbstractParamDescription
    {
    public:
      ParamDescription(std::string name, std::string type, uint32_t level, 
          std::string description, std::string edit_method, T DWAPlannerMovingObsConfig::* f) :
        AbstractParamDescription(name, type, level, description, edit_method),
        field(f)
      {}

      T (DWAPlannerMovingObsConfig::* field);

      virtual void clamp(DWAPlannerMovingObsConfig &config, const DWAPlannerMovingObsConfig &max, const DWAPlannerMovingObsConfig &min) const
      {
        if (config.*field > max.*field)
          config.*field = max.*field;
        
        if (config.*field < min.*field)
          config.*field = min.*field;
      }

      virtual void calcLevel(uint32_t &comb_level, const DWAPlannerMovingObsConfig &config1, const DWAPlannerMovingObsConfig &config2) const
      {
        if (config1.*field != config2.*field)
          comb_level |= level;
      }

      virtual void fromServer(const ros::NodeHandle &nh, DWAPlannerMovingObsConfig &config) const
      {
        nh.getParam(name, config.*field);
      }

      virtual void toServer(const ros::NodeHandle &nh, const DWAPlannerMovingObsConfig &config) const
      {
        nh.setParam(name, config.*field);
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, DWAPlannerMovingObsConfig &config) const
      {
        return dynamic_reconfigure::ConfigTools::getParameter(msg, name, config.*field);
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const DWAPlannerMovingObsConfig &config) const
      {
        dynamic_reconfigure::ConfigTools::appendParameter(msg, name, config.*field);
      }
    };

//#line 13 "../cfg/DWAPlannerMovingObs.cfg"
      double max_trans_vel;
//#line 14 "../cfg/DWAPlannerMovingObs.cfg"
      double min_trans_vel;
//#line 16 "../cfg/DWAPlannerMovingObs.cfg"
      double max_vel_x;
//#line 17 "../cfg/DWAPlannerMovingObs.cfg"
      double min_vel_x;
//#line 19 "../cfg/DWAPlannerMovingObs.cfg"
      double max_vel_y;
//#line 20 "../cfg/DWAPlannerMovingObs.cfg"
      double min_vel_y;
//#line 22 "../cfg/DWAPlannerMovingObs.cfg"
      double max_rot_vel;
//#line 23 "../cfg/DWAPlannerMovingObs.cfg"
      double min_rot_vel;
//#line 25 "../cfg/DWAPlannerMovingObs.cfg"
      double sim_time;
//#line 26 "../cfg/DWAPlannerMovingObs.cfg"
      double sim_granularity;
//#line 28 "../cfg/DWAPlannerMovingObs.cfg"
      double path_distance_bias;
//#line 29 "../cfg/DWAPlannerMovingObs.cfg"
      double goal_distance_bias;
//#line 30 "../cfg/DWAPlannerMovingObs.cfg"
      double occdist_scale;
//#line 32 "../cfg/DWAPlannerMovingObs.cfg"
      double stop_time_buffer;
//#line 33 "../cfg/DWAPlannerMovingObs.cfg"
      double oscillation_reset_dist;
//#line 35 "../cfg/DWAPlannerMovingObs.cfg"
      double forward_point_distance;
//#line 37 "../cfg/DWAPlannerMovingObs.cfg"
      double scaling_speed;
//#line 38 "../cfg/DWAPlannerMovingObs.cfg"
      double max_scaling_factor;
//#line 40 "../cfg/DWAPlannerMovingObs.cfg"
      int vx_samples;
//#line 41 "../cfg/DWAPlannerMovingObs.cfg"
      int vy_samples;
//#line 42 "../cfg/DWAPlannerMovingObs.cfg"
      int vth_samples;
//#line 44 "../cfg/DWAPlannerMovingObs.cfg"
      bool penalize_negative_x;
//#line 46 "../cfg/DWAPlannerMovingObs.cfg"
      bool restore_defaults;
//#line 138 "/opt/ros/electric/stacks/driver_common/dynamic_reconfigure/templates/ConfigType.h"

    bool __fromMessage__(dynamic_reconfigure::Config &msg)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      int count = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        if ((*i)->fromMessage(msg, *this))
          count++;
      if (count != dynamic_reconfigure::ConfigTools::size(msg))
      {
        ROS_ERROR("DWAPlannerMovingObsConfig::__fromMessage__ called with an unexpected parameter.");
        ROS_ERROR("Booleans:");
        for (unsigned int i = 0; i < msg.bools.size(); i++)
          ROS_ERROR("  %s", msg.bools[i].name.c_str());
        ROS_ERROR("Integers:");
        for (unsigned int i = 0; i < msg.ints.size(); i++)
          ROS_ERROR("  %s", msg.ints[i].name.c_str());
        ROS_ERROR("Doubles:");
        for (unsigned int i = 0; i < msg.doubles.size(); i++)
          ROS_ERROR("  %s", msg.doubles[i].name.c_str());
        ROS_ERROR("Strings:");
        for (unsigned int i = 0; i < msg.strs.size(); i++)
          ROS_ERROR("  %s", msg.strs[i].name.c_str());
        // @todo Check that there are no duplicates. Make this error more
        // explicit.
        return false;
      }
      return true;
    }

    // This version of __toMessage__ is used during initialization of
    // statics when __getParamDescriptions__ can't be called yet.
    void __toMessage__(dynamic_reconfigure::Config &msg, const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__) const
    {
      dynamic_reconfigure::ConfigTools::clear(msg);
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        (*i)->toMessage(msg, *this);
    }
    
    void __toMessage__(dynamic_reconfigure::Config &msg) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      __toMessage__(msg, __param_descriptions__);
    }
    
    void __toServer__(const ros::NodeHandle &nh) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        (*i)->toServer(nh, *this);
    }

    void __fromServer__(const ros::NodeHandle &nh)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        (*i)->fromServer(nh, *this);
    }

    void __clamp__()
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const DWAPlannerMovingObsConfig &__max__ = __getMax__();
      const DWAPlannerMovingObsConfig &__min__ = __getMin__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        (*i)->clamp(*this, __max__, __min__);
    }

    uint32_t __level__(const DWAPlannerMovingObsConfig &config) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      uint32_t level = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        (*i)->calcLevel(level, config, *this);
      return level;
    }
    
    static const dynamic_reconfigure::ConfigDescription &__getDescriptionMessage__();
    static const DWAPlannerMovingObsConfig &__getDefault__();
    static const DWAPlannerMovingObsConfig &__getMax__();
    static const DWAPlannerMovingObsConfig &__getMin__();
    static const std::vector<AbstractParamDescriptionConstPtr> &__getParamDescriptions__();
    
  private:
    static const DWAPlannerMovingObsConfigStatics *__get_statics__();
  };
  
  template <> // Max and min are ignored for strings.
  inline void DWAPlannerMovingObsConfig::ParamDescription<std::string>::clamp(DWAPlannerMovingObsConfig &config, const DWAPlannerMovingObsConfig &max, const DWAPlannerMovingObsConfig &min) const
  {
    return;
  }

  class DWAPlannerMovingObsConfigStatics
  {
    friend class DWAPlannerMovingObsConfig;
    
    DWAPlannerMovingObsConfigStatics()
    {
//#line 13 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.max_trans_vel = 0.0;
//#line 13 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.max_trans_vel = std::numeric_limits<double>::infinity();
//#line 13 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.max_trans_vel = 0.55;
//#line 13 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("max_trans_vel", "double", 0, "The absolute value of the maximum translational velocity for the robot in m/s", "", &DWAPlannerMovingObsConfig::max_trans_vel)));
//#line 14 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.min_trans_vel = 0.0;
//#line 14 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.min_trans_vel = std::numeric_limits<double>::infinity();
//#line 14 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.min_trans_vel = 0.1;
//#line 14 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("min_trans_vel", "double", 0, "The absolute value of the minimum translational velocity for the robot in m/s", "", &DWAPlannerMovingObsConfig::min_trans_vel)));
//#line 16 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.max_vel_x = -std::numeric_limits<double>::infinity();
//#line 16 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.max_vel_x = std::numeric_limits<double>::infinity();
//#line 16 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.max_vel_x = 0.55;
//#line 16 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("max_vel_x", "double", 0, "The maximum x velocity for the robot in m/s", "", &DWAPlannerMovingObsConfig::max_vel_x)));
//#line 17 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.min_vel_x = -std::numeric_limits<double>::infinity();
//#line 17 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.min_vel_x = std::numeric_limits<double>::infinity();
//#line 17 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.min_vel_x = 0.0;
//#line 17 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("min_vel_x", "double", 0, "The minimum x velocity for the robot in m/s", "", &DWAPlannerMovingObsConfig::min_vel_x)));
//#line 19 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.max_vel_y = -std::numeric_limits<double>::infinity();
//#line 19 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.max_vel_y = std::numeric_limits<double>::infinity();
//#line 19 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.max_vel_y = 0.1;
//#line 19 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("max_vel_y", "double", 0, "The maximum y velocity for the robot in m/s", "", &DWAPlannerMovingObsConfig::max_vel_y)));
//#line 20 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.min_vel_y = -std::numeric_limits<double>::infinity();
//#line 20 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.min_vel_y = std::numeric_limits<double>::infinity();
//#line 20 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.min_vel_y = -0.1;
//#line 20 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("min_vel_y", "double", 0, "The minimum y velocity for the robot in m/s", "", &DWAPlannerMovingObsConfig::min_vel_y)));
//#line 22 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.max_rot_vel = 0.0;
//#line 22 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.max_rot_vel = std::numeric_limits<double>::infinity();
//#line 22 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.max_rot_vel = 1.0;
//#line 22 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("max_rot_vel", "double", 0, "The absolute value of the maximum rotational velocity for the robot in rad/s", "", &DWAPlannerMovingObsConfig::max_rot_vel)));
//#line 23 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.min_rot_vel = 0.0;
//#line 23 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.min_rot_vel = std::numeric_limits<double>::infinity();
//#line 23 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.min_rot_vel = 0.4;
//#line 23 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("min_rot_vel", "double", 0, "The absolute value of the minimum rotational velocity for the robot in rad/s", "", &DWAPlannerMovingObsConfig::min_rot_vel)));
//#line 25 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.sim_time = 0.0;
//#line 25 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.sim_time = std::numeric_limits<double>::infinity();
//#line 25 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.sim_time = 1.7;
//#line 25 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("sim_time", "double", 0, "The amount of time to roll trajectories out for in seconds", "", &DWAPlannerMovingObsConfig::sim_time)));
//#line 26 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.sim_granularity = 0.0;
//#line 26 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.sim_granularity = std::numeric_limits<double>::infinity();
//#line 26 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.sim_granularity = 0.025;
//#line 26 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("sim_granularity", "double", 0, "The granularity with which to check for collisions along each trajectory in meters", "", &DWAPlannerMovingObsConfig::sim_granularity)));
//#line 28 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.path_distance_bias = -std::numeric_limits<double>::infinity();
//#line 28 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.path_distance_bias = std::numeric_limits<double>::infinity();
//#line 28 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.path_distance_bias = 32.0;
//#line 28 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("path_distance_bias", "double", 0, "The weight for the path distance part of the cost function", "", &DWAPlannerMovingObsConfig::path_distance_bias)));
//#line 29 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.goal_distance_bias = -std::numeric_limits<double>::infinity();
//#line 29 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.goal_distance_bias = std::numeric_limits<double>::infinity();
//#line 29 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.goal_distance_bias = 24.0;
//#line 29 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("goal_distance_bias", "double", 0, "The weight for the goal distance part of the cost function", "", &DWAPlannerMovingObsConfig::goal_distance_bias)));
//#line 30 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.occdist_scale = -std::numeric_limits<double>::infinity();
//#line 30 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.occdist_scale = std::numeric_limits<double>::infinity();
//#line 30 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.occdist_scale = 0.01;
//#line 30 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("occdist_scale", "double", 0, "The weight for the obstacle distance part of the cost function", "", &DWAPlannerMovingObsConfig::occdist_scale)));
//#line 32 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.stop_time_buffer = 0.0;
//#line 32 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.stop_time_buffer = std::numeric_limits<double>::infinity();
//#line 32 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.stop_time_buffer = 0.2;
//#line 32 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("stop_time_buffer", "double", 0, "The amount of time that the robot must stop before a collision in order for a trajectory to be considered valid in seconds", "", &DWAPlannerMovingObsConfig::stop_time_buffer)));
//#line 33 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.oscillation_reset_dist = 0.0;
//#line 33 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.oscillation_reset_dist = std::numeric_limits<double>::infinity();
//#line 33 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.oscillation_reset_dist = 0.05;
//#line 33 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("oscillation_reset_dist", "double", 0, "The distance the robot must travel before oscillation flags are reset, in meters", "", &DWAPlannerMovingObsConfig::oscillation_reset_dist)));
//#line 35 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.forward_point_distance = -std::numeric_limits<double>::infinity();
//#line 35 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.forward_point_distance = std::numeric_limits<double>::infinity();
//#line 35 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.forward_point_distance = 0.325;
//#line 35 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("forward_point_distance", "double", 0, "The distance from the center point of the robot to place an additional scoring point, in meters", "", &DWAPlannerMovingObsConfig::forward_point_distance)));
//#line 37 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.scaling_speed = 0.0;
//#line 37 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.scaling_speed = std::numeric_limits<double>::infinity();
//#line 37 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.scaling_speed = 0.25;
//#line 37 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("scaling_speed", "double", 0, "The absolute value of the velocity at which to start scaling the robot's footprint, in m/s", "", &DWAPlannerMovingObsConfig::scaling_speed)));
//#line 38 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.max_scaling_factor = 0.0;
//#line 38 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.max_scaling_factor = std::numeric_limits<double>::infinity();
//#line 38 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.max_scaling_factor = 0.2;
//#line 38 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<double>("max_scaling_factor", "double", 0, "The maximum factor to scale the robot's footprint by", "", &DWAPlannerMovingObsConfig::max_scaling_factor)));
//#line 40 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.vx_samples = 1;
//#line 40 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.vx_samples = 2147483647;
//#line 40 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.vx_samples = 3;
//#line 40 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<int>("vx_samples", "int", 0, "The number of samples to use when exploring the x velocity space", "", &DWAPlannerMovingObsConfig::vx_samples)));
//#line 41 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.vy_samples = 1;
//#line 41 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.vy_samples = 2147483647;
//#line 41 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.vy_samples = 10;
//#line 41 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<int>("vy_samples", "int", 0, "The number of samples to use when exploring the y velocity space", "", &DWAPlannerMovingObsConfig::vy_samples)));
//#line 42 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.vth_samples = 1;
//#line 42 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.vth_samples = 2147483647;
//#line 42 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.vth_samples = 20;
//#line 42 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<int>("vth_samples", "int", 0, "The number of samples to use when exploring the theta velocity space", "", &DWAPlannerMovingObsConfig::vth_samples)));
//#line 44 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.penalize_negative_x = 0;
//#line 44 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.penalize_negative_x = 1;
//#line 44 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.penalize_negative_x = 1;
//#line 44 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<bool>("penalize_negative_x", "bool", 0, "Whether to penalize trajectories that have negative x velocities.", "", &DWAPlannerMovingObsConfig::penalize_negative_x)));
//#line 46 "../cfg/DWAPlannerMovingObs.cfg"
      __min__.restore_defaults = 0;
//#line 46 "../cfg/DWAPlannerMovingObs.cfg"
      __max__.restore_defaults = 1;
//#line 46 "../cfg/DWAPlannerMovingObs.cfg"
      __default__.restore_defaults = 0;
//#line 46 "../cfg/DWAPlannerMovingObs.cfg"
      __param_descriptions__.push_back(DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr(new DWAPlannerMovingObsConfig::ParamDescription<bool>("restore_defaults", "bool", 0, "Restore to the original configuration.", "", &DWAPlannerMovingObsConfig::restore_defaults)));
//#line 239 "/opt/ros/electric/stacks/driver_common/dynamic_reconfigure/templates/ConfigType.h"
    
      for (std::vector<DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); i++)
        __description_message__.parameters.push_back(**i);
      __max__.__toMessage__(__description_message__.max, __param_descriptions__); 
      __min__.__toMessage__(__description_message__.min, __param_descriptions__); 
      __default__.__toMessage__(__description_message__.dflt, __param_descriptions__); 
    }
    std::vector<DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr> __param_descriptions__;
    DWAPlannerMovingObsConfig __max__;
    DWAPlannerMovingObsConfig __min__;
    DWAPlannerMovingObsConfig __default__;
    dynamic_reconfigure::ConfigDescription __description_message__;
    static const DWAPlannerMovingObsConfigStatics *get_instance()
    {
      // Split this off in a separate function because I know that
      // instance will get initialized the first time get_instance is
      // called, and I am guaranteeing that get_instance gets called at
      // most once.
      static DWAPlannerMovingObsConfigStatics instance;
      return &instance;
    }
  };

  inline const dynamic_reconfigure::ConfigDescription &DWAPlannerMovingObsConfig::__getDescriptionMessage__() 
  {
    return __get_statics__()->__description_message__;
  }

  inline const DWAPlannerMovingObsConfig &DWAPlannerMovingObsConfig::__getDefault__()
  {
    return __get_statics__()->__default__;
  }
  
  inline const DWAPlannerMovingObsConfig &DWAPlannerMovingObsConfig::__getMax__()
  {
    return __get_statics__()->__max__;
  }
  
  inline const DWAPlannerMovingObsConfig &DWAPlannerMovingObsConfig::__getMin__()
  {
    return __get_statics__()->__min__;
  }
  
  inline const std::vector<DWAPlannerMovingObsConfig::AbstractParamDescriptionConstPtr> &DWAPlannerMovingObsConfig::__getParamDescriptions__()
  {
    return __get_statics__()->__param_descriptions__;
  }

  inline const DWAPlannerMovingObsConfigStatics *DWAPlannerMovingObsConfig::__get_statics__()
  {
    const static DWAPlannerMovingObsConfigStatics *statics;
  
    if (statics) // Common case
      return statics;

    boost::mutex::scoped_lock lock(dynamic_reconfigure::__init_mutex__);

    if (statics) // In case we lost a race.
      return statics;

    statics = DWAPlannerMovingObsConfigStatics::get_instance();
    
    return statics;
  }


}

#endif // __DWAPLANNERMOVINGOBSRECONFIGURATOR_H__
