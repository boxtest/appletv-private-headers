/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADMovie.h"

@class NSString, NSData;

@interface OADEmbeddedMediaFile : OADMovie {
	NSData *mData;	// 12 = 0xc
	NSString *mName;	// 16 = 0x10
}
@property(retain) NSData *data;	// G=0x34c29ce1; S=0x34bb18f1; @synthesize=mData
@property(retain) NSString *name;	// G=0x34c29cf5; S=0x34bb18e1; @synthesize=mName
// declared property getter: - (id)data;	// 0x34c29ce1
- (void)dealloc;	// 0x34bb1901
// declared property getter: - (id)name;	// 0x34c29cf5
// declared property setter: - (void)setData:(id)data;	// 0x34bb18f1
// declared property setter: - (void)setName:(id)name;	// 0x34bb18e1
@end

