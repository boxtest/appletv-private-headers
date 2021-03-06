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
@property(copy, nonatomic) NSURL *URL;	// G=0x345ab2a5; S=0x345ab2c1; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x345ab3f9; 
@property(copy, nonatomic) NSDictionary *XProperties;	// G=0x345ab415; S=0x345ab465; 
@property(copy, nonatomic) NSString *fileFormat;	// G=0x345ab315; S=0x345ab331; 
@property(copy, nonatomic) NSString *fileName;	// G=0x345ab2dd; S=0x345ab2f9; 
@property(copy, nonatomic) NSNumber *fileSize;	// G=0x345ab3c1; S=0x345ab3dd; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x345ab34d; 
@property(copy, nonatomic) NSURL *localURL;	// G=0x345ab389; S=0x345ab3a5; 
+ (id)relations;	// 0x345ab0ed
// declared property getter: - (id)URL;	// 0x345ab2a5
// declared property getter: - (id)UUID;	// 0x345ab3f9
// declared property getter: - (id)XProperties;	// 0x345ab415
- (id)copyWithZone:(NSZone *)zone;	// 0x345ab17d
- (id)description;	// 0x345ab4bd
// declared property getter: - (id)fileFormat;	// 0x345ab315
// declared property getter: - (id)fileName;	// 0x345ab2dd
// declared property getter: - (id)fileSize;	// 0x345ab3c1
// declared property getter: - (BOOL)isBinary;	// 0x345ab34d
// declared property getter: - (id)localURL;	// 0x345ab389
// declared property setter: - (void)setFileFormat:(id)format;	// 0x345ab331
// declared property setter: - (void)setFileName:(id)name;	// 0x345ab2f9
// declared property setter: - (void)setFileSize:(id)size;	// 0x345ab3dd
- (void)setIsBinary:(BOOL)binary;	// 0x345ab36d
// declared property setter: - (void)setLocalURL:(id)url;	// 0x345ab3a5
// declared property setter: - (void)setURL:(id)url;	// 0x345ab2c1
// declared property setter: - (void)setXProperties:(id)properties;	// 0x345ab465
@end

