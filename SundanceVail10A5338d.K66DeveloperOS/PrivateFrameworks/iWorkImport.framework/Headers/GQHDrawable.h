/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDrawablesGenerator.h"


@interface GQHDrawable : NSObject <GQDrawablesGenerator> {
}
+ (void)aboutToGenerateDrawable:(id)generateDrawable htmlState:(id)state;	// 0x35095c79
+ (int)beginDrawables:(id)drawables;	// 0x35095c41
+ (Class)beginTable:(id)table;	// 0x35096be1
+ (void)doneGeneratingDrawable:(id)drawable htmlState:(id)state;	// 0x35095d21
+ (int)endDrawables:(id)drawables;	// 0x35096bdd
+ (int)handleDrawable:(id)drawable state:(id)state;	// 0x35095c45
+ (int)handleFloatingDrawable:(id)drawable htmlState:(id)state;	// 0x35095d8d
+ (int)handleInlineDrawable:(id)drawable htmlState:(id)state;	// 0x35096481
@end

