#include "xfeat_detector.h"

namespace stella_vslam {
namespace feature {

xfeat_detector::xfeat_detector(): detector(4096, 0.05, true)
{
}


void xfeat_detector::extract(const cv::_InputArray& in_image, const cv::_InputArray& in_image_mask,
             std::vector<cv::KeyPoint>& keypts, const cv::_OutputArray& out_descriptors)
{
    if (in_image.empty()) {
        return;
    }

    const auto image = in_image.getMat();
    auto inputTensor = detector.parseInput(image);



}

}
}
