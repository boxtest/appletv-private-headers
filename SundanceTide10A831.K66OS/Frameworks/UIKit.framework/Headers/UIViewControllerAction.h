/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIViewController, NSString;

__attribute__((visibility("hidden")))
@interface UIViewControllerAction : NSObject {
	UIViewController *_viewController;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	int _transition;	// 12 = 0xc
	id _completion;	// 16 = 0x10
	float _curlUpRevealedHeight;	// 20 = 0x14
}
@property(assign, nonatomic, setter=_setCurlUpRevealedHeight:) float _curlUpRevealedHeight;	// G=0x31ddbf65; S=0x31ce8dc5; @synthesize
@property(readonly, assign, nonatomic) BOOL animated;	// G=0x31ddbf49; 
@property(copy, nonatomic) id completion;	// G=0x31ce8e25; S=0x31cbe419; @synthesize=_completion
@property(retain, nonatomic) NSString *name;	// G=0x31ddbf85; S=0x31cbe3e5; @synthesize=_name
@property(assign, nonatomic) int transition;	// G=0x31ce8f65; S=0x31cbe3f5; @synthesize=_transition
@property(assign, nonatomic) UIViewController *viewController;	// G=0x31ddbf75; S=0x31cbe3d5; @synthesize=_viewController
- (id)initWithViewController:(id)viewController name:(id)name transition:(int)transition;	// 0x31cbe351
// declared property getter: - (float)_curlUpRevealedHeight;	// 0x31ddbf65
// declared property setter: - (void)_setCurlUpRevealedHeight:(float)height;	// 0x31ce8dc5
// declared property getter: - (BOOL)animated;	// 0x31ddbf49
// declared property getter: - (id)completion;	// 0x31ce8e25
- (void)dealloc;	// 0x31ce8f79
// declared property getter: - (id)name;	// 0x31ddbf85
// declared property setter: - (void)setCompletion:(id)completion;	// 0x31cbe419
// declared property setter: - (void)setName:(id)name;	// 0x31cbe3e5
// declared property setter: - (void)setTransition:(int)transition;	// 0x31cbe3f5
// declared property setter: - (void)setViewController:(id)controller;	// 0x31cbe3d5
// declared property getter: - (int)transition;	// 0x31ce8f65
// declared property getter: - (id)viewController;	// 0x31ddbf75
@end

