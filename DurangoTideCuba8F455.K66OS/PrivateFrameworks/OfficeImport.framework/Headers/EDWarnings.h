/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EDWarnings : NSObject {
@private
	CFArrayRef mWarnings;	// 4 = 0x4
}
- (id)init;	// 0x32bfe2ad
- (void)addWarning:(CPTaggedMessageStructure *)warning;	// 0x32afb209
- (void)dealloc;	// 0x32b12bf9
- (void)reportWarningsWithAssociatedObject:(id)associatedObject;	// 0x32d02cc1
@end
