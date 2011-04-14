/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRSelectionHandler.h"


@interface BRMainMenuSelectionHandler : NSObject <BRSelectionHandler> {
@private
	id<BRSelectionHandler> _handler;	// 4 = 0x4
}
+ (id)handlerWithHandler:(id)handler;	// 0x32972dfd
- (id)initWithHandler:(id)handler;	// 0x32972dad
- (void)dealloc;	// 0x32972d65
- (BOOL)handlePlayForControl:(id)control;	// 0x32972c6d
- (BOOL)handleSelectionForControl:(id)control;	// 0x328b1511
@end
