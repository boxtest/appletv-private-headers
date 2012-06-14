/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRSelectionHandler.h"


@interface BRMediaObjectButtonSelectionHandler : NSObject <BRSelectionHandler> {
@private
	int _selectionType;	// 4 = 0x4
}
- (id)init;	// 0x3031b151
- (BOOL)_handleDeleteSelectionForControl:(id)control;	// 0x3031b3b1
- (BOOL)_handlePlaySelectionForControl:(id)control;	// 0x3031b209
- (BOOL)_handleStartDownloadSelectionForControl:(id)control;	// 0x3031b33d
- (BOOL)handlePlayForControl:(id)control;	// 0x3031b1a5
- (BOOL)handleSelectionForControl:(id)control;	// 0x3031b1bd
- (void)setSelectionHandlerType:(int)type;	// 0x3031b195
@end
