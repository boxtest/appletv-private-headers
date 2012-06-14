/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UITextRange;

__attribute__((visibility("hidden")))
@interface UITextSelectionRect : NSObject {
}
@property(readonly, assign, nonatomic) UITextRange *range;	// G=0x30379825; 
@property(readonly, assign, nonatomic) CGRect rect;	// G=0x303797fd; 
@property(readonly, assign, nonatomic) int writingDirection;	// G=0x30379821; 
+ (CGRect)endEdgeFromRects:(id)rects;	// 0x3037965d
+ (CGRect)startEdgeFromRects:(id)rects;	// 0x303794b9
// declared property getter: - (id)range;	// 0x30379825
// declared property getter: - (CGRect)rect;	// 0x303797fd
// declared property getter: - (int)writingDirection;	// 0x30379821
@end
