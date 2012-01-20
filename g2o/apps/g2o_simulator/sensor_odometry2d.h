#ifndef G2O_SENSOR_ODOMETRY2D_H_
#define G2O_SENSOR_ODOMETRY2D_H_

#include "g2o_simulator_api.h"
#include "simulator2d_base.h"

namespace g2o {
  class G2O_SIMULATOR_API SensorOdometry2D: public BinarySensor<Robot2D, EdgeSE2, WorldObjectSE2 > {
  public:
    typedef Robot2D::PoseObject PoseObject;
    SensorOdometry2D(const std::string& name_);
    virtual void sense();
    virtual void addNoise(EdgeType* e);
  };

} // end namespace

#endif
