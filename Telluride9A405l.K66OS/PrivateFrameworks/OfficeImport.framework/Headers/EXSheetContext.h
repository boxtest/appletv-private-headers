/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedNodeContext.h"
#import <NSObject.h> // Unknown library

@class EXState, NSURL, NSString;

__attribute__((visibility("hidden")))
@interface EXSheetContext : NSObject <OCDDelayedNodeContext> {
@private
	EXState *mSheetState;	// 4 = 0x4
	NSURL *mPackageLocation;	// 8 = 0x8
	NSString *mType;	// 12 = 0xc
}
- (id)initWithSheetLocation:(id)sheetLocation sheetXmlType:(id)type state:(id)state;	// 0x30d88215
- (void)dealloc;	// 0x30d8b6e5
- (bool)loadDelayedNode:(id)node;	// 0x30d887a1
@end

