/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

@interface MSShare : NSObject <NSCoding> {
@private
	NSString *_personID;	// 4 = 0x4
	NSString *_firstName;	// 8 = 0x8
	NSString *_lastName;	// 12 = 0xc
	NSString *_emailAddress;	// 16 = 0x10
	NSString *_UUID;	// 20 = 0x14
	int _sharingOurStream;	// 24 = 0x18
	int _sharingTheirStream;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *UUID;	// G=0x31c4a9c1; S=0x31c4a9d1; @synthesize=_UUID
@property(retain, nonatomic) NSString *emailAddress;	// G=0x31c4a98d; S=0x31c4a99d; @synthesize=_emailAddress
@property(retain, nonatomic) NSString *firstName;	// G=0x31c4a925; S=0x31c4a935; @synthesize=_firstName
@property(retain, nonatomic) NSString *fullName;	// G=0x31c4a0c5; S=0x31c4a0c1; 
@property(retain, nonatomic) NSString *lastName;	// G=0x31c4a959; S=0x31c4a969; @synthesize=_lastName
@property(retain, nonatomic) NSString *personID;	// G=0x31c4a8f1; S=0x31c4a901; @synthesize=_personID
@property(assign, nonatomic) int sharingOurPhotostream;	// G=0x31c4a081; S=0x31c4a091; 
@property(assign, nonatomic) int sharingOurStream;	// G=0x31c4a9f5; S=0x31c4aa05; @synthesize=_sharingOurStream
@property(assign, nonatomic) int sharingTheirPhotostream;	// G=0x31c4a0a1; S=0x31c4a0b1; 
@property(assign, nonatomic) int sharingTheirStream;	// G=0x31c4aa15; S=0x31c4aa25; @synthesize=_sharingTheirStream
+ (id)share;	// 0x31c4a0d1
- (id)initWithCoder:(id)coder;	// 0x31c4a779
// declared property getter: - (id)UUID;	// 0x31c4a9c1
- (void)dealloc;	// 0x31c4a109
- (id)description;	// 0x31c4a23d
// declared property getter: - (id)emailAddress;	// 0x31c4a98d
- (void)encodeWithCoder:(id)coder;	// 0x31c4a60d
// declared property getter: - (id)firstName;	// 0x31c4a925
// declared property getter: - (id)fullName;	// 0x31c4a0c5
- (unsigned)hash;	// 0x31c4a1a5
- (BOOL)isEqual:(id)equal;	// 0x31c4a381
// declared property getter: - (id)lastName;	// 0x31c4a959
// declared property getter: - (id)personID;	// 0x31c4a8f1
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x31c4a99d
// declared property setter: - (void)setFirstName:(id)name;	// 0x31c4a935
// declared property setter: - (void)setFullName:(id)name;	// 0x31c4a0c1
// declared property setter: - (void)setLastName:(id)name;	// 0x31c4a969
// declared property setter: - (void)setPersonID:(id)anId;	// 0x31c4a901
// declared property setter: - (void)setSharingOurPhotostream:(int)photostream;	// 0x31c4a091
// declared property setter: - (void)setSharingOurStream:(int)stream;	// 0x31c4aa05
// declared property setter: - (void)setSharingTheirPhotostream:(int)photostream;	// 0x31c4a0b1
// declared property setter: - (void)setSharingTheirStream:(int)stream;	// 0x31c4aa25
// declared property setter: - (void)setUUID:(id)uuid;	// 0x31c4a9d1
// declared property getter: - (int)sharingOurPhotostream;	// 0x31c4a081
// declared property getter: - (int)sharingOurStream;	// 0x31c4a9f5
// declared property getter: - (int)sharingTheirPhotostream;	// 0x31c4a0a1
// declared property getter: - (int)sharingTheirStream;	// 0x31c4aa15
@end

