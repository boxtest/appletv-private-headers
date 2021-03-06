/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILabel.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableCountView : UILabel {
@private
	NSString *_countString;	// 104 = 0x68
	int _count;	// 108 = 0x6c
}
@property(assign) int count;	// G=0x30774e35; S=0x3077661d; converted property
- (id)initWithFrame:(CGRect)frame withCountString:(id)countString withCount:(int)count;	// 0x307772a9
// converted property getter: - (int)count;	// 0x30774e35
- (void)dealloc;	// 0x30777261
// converted property setter: - (void)setCount:(int)count;	// 0x3077661d
- (void)setCountString:(id)string withCount:(int)count;	// 0x3077669d
@end

