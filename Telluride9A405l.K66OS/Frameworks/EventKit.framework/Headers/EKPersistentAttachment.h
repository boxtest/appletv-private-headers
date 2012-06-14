/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSURL, NSString, NSDictionary, NSNumber;

@interface EKPersistentAttachment : EKPersistentObject <NSCopying> {
}
@property(copy, nonatomic) NSURL *URL;	// G=0x332342a5; S=0x332342c1; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x332343f9; 
@property(copy, nonatomic) NSDictionary *XProperties;	// G=0x33234415; S=0x33234465; 
@property(copy, nonatomic) NSString *fileFormat;	// G=0x33234315; S=0x33234331; 
@property(copy, nonatomic) NSString *fileName;	// G=0x332342dd; S=0x332342f9; 
@property(copy, nonatomic) NSNumber *fileSize;	// G=0x332343c1; S=0x332343dd; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x3323434d; 
@property(copy, nonatomic) NSURL *localURL;	// G=0x33234389; S=0x332343a5; 
+ (id)relations;	// 0x332340ed
// declared property getter: - (id)URL;	// 0x332342a5
// declared property getter: - (id)UUID;	// 0x332343f9
// declared property getter: - (id)XProperties;	// 0x33234415
- (id)copyWithZone:(NSZone *)zone;	// 0x3323417d
- (id)description;	// 0x332344bd
// declared property getter: - (id)fileFormat;	// 0x33234315
// declared property getter: - (id)fileName;	// 0x332342dd
// declared property getter: - (id)fileSize;	// 0x332343c1
// declared property getter: - (BOOL)isBinary;	// 0x3323434d
// declared property getter: - (id)localURL;	// 0x33234389
// declared property setter: - (void)setFileFormat:(id)format;	// 0x33234331
// declared property setter: - (void)setFileName:(id)name;	// 0x332342f9
// declared property setter: - (void)setFileSize:(id)size;	// 0x332343dd
- (void)setIsBinary:(BOOL)binary;	// 0x3323436d
// declared property setter: - (void)setLocalURL:(id)url;	// 0x332343a5
// declared property setter: - (void)setURL:(id)url;	// 0x332342c1
// declared property setter: - (void)setXProperties:(id)properties;	// 0x33234465
@end
