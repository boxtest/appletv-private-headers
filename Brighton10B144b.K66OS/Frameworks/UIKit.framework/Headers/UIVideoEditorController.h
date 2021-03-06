/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationController.h"

@class NSMutableDictionary, NSString;
@protocol UINavigationControllerDelegate, UIVideoEditorControllerDelegate;

@interface UIVideoEditorController : UINavigationController {
	int _previousStatusBarStyle;	// 288 = 0x120
	NSMutableDictionary *_properties;	// 292 = 0x124
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned insetsApplied : 1;
		unsigned adjustingInsets : 1;
	} _flags;	// 296 = 0x128
}
@property(assign, nonatomic) id<UINavigationControllerDelegate, UIVideoEditorControllerDelegate> delegate;	// @dynamic
@property(assign, nonatomic) double videoMaximumDuration;	// G=0x32de76dd; S=0x32de7715; 
@property(copy, nonatomic) NSString *videoPath;	// G=0x32de76a5; S=0x32de76c1; 
@property(assign, nonatomic) int videoQuality;	// G=0x32de775d; S=0x32de7795; 
+ (BOOL)canEditVideoAtPath:(id)path;	// 0x32de6f49
- (id)init;	// 0x32de6f7d
- (void)_autoDismiss;	// 0x32de74d5
- (id)_createInitialController;	// 0x32de73e5
- (BOOL)_didRevertStatusBar;	// 0x32de7325
- (void)_initializeProperties;	// 0x32de7841
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x32de7339
- (id)_properties;	// 0x32de7929
- (void)_removeAllChildren;	// 0x32de7345
- (void)_setProperties:(id)properties;	// 0x32de77dd
- (void)_setValue:(id)value forProperty:(id)property;	// 0x32de7979
- (void)_setupControllers;	// 0x32de744d
- (id)_valueForProperty:(id)property;	// 0x32de79e9
- (void)editVideoViewController:(id)controller didFailWithError:(id)error;	// 0x32de762d
- (void)editVideoViewController:(id)controller didTrimVideoWithOptions:(id)options;	// 0x32de7569
- (void)editVideoViewControllerDidCancel:(id)editVideoViewController;	// 0x32de7501
// declared property setter: - (void)setVideoMaximumDuration:(double)duration;	// 0x32de7715
// declared property setter: - (void)setVideoPath:(id)path;	// 0x32de76c1
// declared property setter: - (void)setVideoQuality:(int)quality;	// 0x32de7795
// declared property getter: - (double)videoMaximumDuration;	// 0x32de76dd
// declared property getter: - (id)videoPath;	// 0x32de76a5
// declared property getter: - (int)videoQuality;	// 0x32de775d
- (void)viewDidDisappear:(BOOL)view;	// 0x32de7291
- (void)viewWillAppear:(BOOL)view;	// 0x32de705d
- (void)viewWillDisappear:(BOOL)view;	// 0x32de7119
- (void)viewWillUnload;	// 0x32de6fe1
@end

