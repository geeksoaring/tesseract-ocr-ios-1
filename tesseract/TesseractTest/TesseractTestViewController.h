//
//  TesseractTestViewController.h
//  TesseractTest
//
//  Created by Alexander Persson on 2011-07-16.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "AZVideoCaptureController.h"
#import "AZCharacterRecognizer.h"

@interface TesseractTestViewController : UIViewController<AZVideoCaptureControllerDelegate> {
 @protected
    AZVideoCaptureController* videoController_;
    AZCharacterRecognizer* recognizer_;
}

@end
