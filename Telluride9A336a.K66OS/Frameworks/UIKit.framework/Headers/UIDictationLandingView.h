/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSTimer, UITextRange;

__attribute__((visibility("hidden")))
@interface UIDictationLandingView : UIView {
@private
	int _highlighted;	// 48 = 0x30
	float _diameter;	// 52 = 0x34
	NSTimer *_timer;	// 56 = 0x38
	UITextRange *_range;	// 60 = 0x3c
	id _placeholder;	// 64 = 0x40
	BOOL _willInsertText;	// 68 = 0x44
}
@property(assign, nonatomic) BOOL willInsertText;	// G=0x35469e0d; S=0x35469e1d; @synthesize=_willInsertText
+ (id)sharedInstance;	// 0x354694e1
- (id)initWithFrame:(CGRect)frame;	// 0x3546953d
- (void)advanceLanding:(id)landing;	// 0x354697d1
- (void)dealloc;	// 0x35469791
- (void)drawRect:(CGRect)rect;	// 0x354695fd
// declared property setter: - (void)setWillInsertText:(BOOL)insertText;	// 0x35469e1d
- (void)startLanding;	// 0x3546980d
- (void)stopLanding;	// 0x35469c69
// declared property getter: - (BOOL)willInsertText;	// 0x35469e0d
@end

