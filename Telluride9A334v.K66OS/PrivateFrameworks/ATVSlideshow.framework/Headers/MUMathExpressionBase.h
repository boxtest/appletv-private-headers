/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSError, NSMutableDictionary;

@interface MUMathExpressionBase : NSObject {
	NSMutableDictionary *_indicesForVariables;	// 4 = 0x4
	NSError *_lastError;	// 8 = 0x8
}
@property(readonly, retain) NSError *lastError;	// G=0x32fb5e15; converted property
+ (id)parserErrorToString:(XXStruct_HETg$A *)string;	// 0x32fb5e25
- (id)init;	// 0x32fb5ced
- (void)_cleanup;	// 0x32fb5d51
- (void)dealloc;	// 0x32fb5d95
- (void)finalize;	// 0x32fb5dd5
// converted property getter: - (id)lastError;	// 0x32fb5e15
- (void)setLastError:(XXStruct_HETg$A *)error;	// 0x32fb5fa9
@end
