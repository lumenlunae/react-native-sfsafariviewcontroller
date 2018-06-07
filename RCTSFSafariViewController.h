#import <React/RCTConvert.h>
#import <React/RCTEventDispatcher.h>
#import <UIKit/UIKit.h>


#if __has_include(<React/RCTBridgeModule.h>)
  #import <React/RCTBridgeModule.h>
#else
  #import "RCTBridgeModule.h"
#endif

@import SafariServices;

@interface RCTSFSafariViewController : NSObject <RCTBridgeModule, SFSafariViewControllerDelegate>
@end
