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
+ (id)handlerWithHandler:(id)handler;	// 0x329e7d6d
- (id)initWithHandler:(id)handler;	// 0x329e7d1d
- (void)dealloc;	// 0x329e7cd5
- (BOOL)handlePlayForControl:(id)control;	// 0x329e7bdd
- (BOOL)handleSelectionForControl:(id)control;	// 0x32926331
@end
