/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UITextInputTokenizer.h"
#import "UIKit-Structs.h"

@class UIResponder;
@protocol UITextInput;

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {
@private
	UIResponder<UITextInput> *_textInput;	// 4 = 0x4
}
- (id)initWithTextInput:(id)textInput;	// 0x302f08bd
- (NSRange)_getClosestTokenRangeForPosition:(id)position granularity:(int)granularity downstream:(BOOL)downstream;	// 0x302f0b51
- (BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;	// 0x302efe31
- (BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;	// 0x302efcfd
- (id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;	// 0x302efd7d
- (id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;	// 0x302efc35
@end

