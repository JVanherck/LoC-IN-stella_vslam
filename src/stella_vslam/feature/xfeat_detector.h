#ifndef XFEAT_DETECTOR_H
#define XFEAT_DETECTOR_H

#include <XFeat.h>

namespace stella_vslam {
namespace feature {

class xfeat_detector {
public:
    xfeat_detector();

    //! Extract keypoints and each descriptor of them
    void extract(const cv::_InputArray& in_image, const cv::_InputArray& in_image_mask,
                 std::vector<cv::KeyPoint>& keypts, const cv::_OutputArray& out_descriptors);

private:
    XFeat::XFDetector detector;
};

}
}

#endif // XFEAT_DETECTOR_H
