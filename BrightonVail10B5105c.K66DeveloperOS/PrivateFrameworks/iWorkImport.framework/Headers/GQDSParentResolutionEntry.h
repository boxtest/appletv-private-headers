/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library

@class GQDSStyle;

@interface GQDSParentResolutionEntry : NSObject {
	char *mParentIdentifier;	// 4 = 0x4
	GQDSStyle *mStyle;	// 8 = 0x8
}
- (id)initWithStyle:(id)style parentIdentifier:(const char *)identifier;	// 0x32ce32ed
- (void)dealloc;	// 0x32ce3359
- (const char *)parentIdentifier;	// 0x32ce33d5
- (id)style;	// 0x32ce33c5
@end
