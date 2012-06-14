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
@property(retain, nonatomic) NSString *UUID;	// G=0x304d8131; S=0x304d8141; @synthesize=_UUID
@property(retain, nonatomic) NSString *emailAddress;	// G=0x304d80fd; S=0x304d810d; @synthesize=_emailAddress
@property(retain, nonatomic) NSString *firstName;	// G=0x304d8095; S=0x304d80a5; @synthesize=_firstName
@property(retain, nonatomic) NSString *fullName;	// G=0x304d7835; S=0x304d7831; 
@property(retain, nonatomic) NSString *lastName;	// G=0x304d80c9; S=0x304d80d9; @synthesize=_lastName
@property(retain, nonatomic) NSString *personID;	// G=0x304d8061; S=0x304d8071; @synthesize=_personID
@property(assign, nonatomic) int sharingOurPhotostream;	// G=0x304d77f1; S=0x304d7801; 
@property(assign, nonatomic) int sharingOurStream;	// G=0x304d8165; S=0x304d8175; @synthesize=_sharingOurStream
@property(assign, nonatomic) int sharingTheirPhotostream;	// G=0x304d7811; S=0x304d7821; 
@property(assign, nonatomic) int sharingTheirStream;	// G=0x304d8185; S=0x304d8195; @synthesize=_sharingTheirStream
+ (id)share;	// 0x304d7841
- (id)initWithCoder:(id)coder;	// 0x304d7ee9
// declared property getter: - (id)UUID;	// 0x304d8131
- (void)dealloc;	// 0x304d7879
- (id)description;	// 0x304d79ad
// declared property getter: - (id)emailAddress;	// 0x304d80fd
- (void)encodeWithCoder:(id)coder;	// 0x304d7d7d
// declared property getter: - (id)firstName;	// 0x304d8095
// declared property getter: - (id)fullName;	// 0x304d7835
- (unsigned)hash;	// 0x304d7915
- (BOOL)isEqual:(id)equal;	// 0x304d7af1
// declared property getter: - (id)lastName;	// 0x304d80c9
// declared property getter: - (id)personID;	// 0x304d8061
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x304d810d
// declared property setter: - (void)setFirstName:(id)name;	// 0x304d80a5
// declared property setter: - (void)setFullName:(id)name;	// 0x304d7831
// declared property setter: - (void)setLastName:(id)name;	// 0x304d80d9
// declared property setter: - (void)setPersonID:(id)anId;	// 0x304d8071
// declared property setter: - (void)setSharingOurPhotostream:(int)photostream;	// 0x304d7801
// declared property setter: - (void)setSharingOurStream:(int)stream;	// 0x304d8175
// declared property setter: - (void)setSharingTheirPhotostream:(int)photostream;	// 0x304d7821
// declared property setter: - (void)setSharingTheirStream:(int)stream;	// 0x304d8195
// declared property setter: - (void)setUUID:(id)uuid;	// 0x304d8141
// declared property getter: - (int)sharingOurPhotostream;	// 0x304d77f1
// declared property getter: - (int)sharingOurStream;	// 0x304d8165
// declared property getter: - (int)sharingTheirPhotostream;	// 0x304d7811
// declared property getter: - (int)sharingTheirStream;	// 0x304d8185
@end
