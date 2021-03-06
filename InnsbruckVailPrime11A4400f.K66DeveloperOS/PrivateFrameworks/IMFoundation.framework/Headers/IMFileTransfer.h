/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import </libobjc.A.h>

@class NSString, NSDictionary, NSDate, NSData, NSURL;

@interface IMFileTransfer : NSObject {
	BOOL _isIncoming;	// 4 = 0x4
	BOOL _isDirectory;	// 5 = 0x5
	BOOL _shouldAttemptToResume;	// 6 = 0x6
	BOOL _wasRegisteredAsStandalone;	// 7 = 0x7
	BOOL _shouldForceArchive;	// 8 = 0x8
	BOOL _needsWrapper;	// 9 = 0x9
	unsigned short _hfsFlags;	// 10 = 0xa
	NSURL *_localURL;	// 12 = 0xc
	NSData *_localBookmark;	// 16 = 0x10
	NSString *_guid;	// 20 = 0x14
	NSString *_messageGUID;	// 24 = 0x18
	NSDate *_startDate;	// 28 = 0x1c
	NSDate *_createdDate;	// 32 = 0x20
	int _transferState;	// 36 = 0x24
	NSString *_filename;	// 40 = 0x28
	NSURL *_transferDataURL;	// 44 = 0x2c
	NSString *_utiType;	// 48 = 0x30
	NSString *_mimeType;	// 52 = 0x34
	unsigned long _hfsType;	// 56 = 0x38
	unsigned long _hfsCreator;	// 60 = 0x3c
	NSString *_accountID;	// 64 = 0x40
	NSString *_otherPerson;	// 68 = 0x44
	int _error;	// 72 = 0x48
	NSString *_errorDescription;	// 76 = 0x4c
	NSDictionary *_localUserInfo;	// 80 = 0x50
	NSString *_transferredFilename;	// 84 = 0x54
	NSDictionary *_transcoderUserInfo;	// 88 = 0x58
	double _lastUpdatedInterval;	// 92 = 0x5c
	double _lastAveragedInterval;	// 100 = 0x64
	unsigned long long _lastAveragedBytes;	// 108 = 0x6c
	unsigned long long _currentBytes;	// 116 = 0x74
	unsigned long long _totalBytes;	// 124 = 0x7c
	unsigned long long _averageTransferRate;	// 132 = 0x84
}
@property(readonly, assign, nonatomic) unsigned long long _lastAveragedBytes;	// G=0x31216cf9; @synthesize
@property(assign, nonatomic, setter=_setLastAveragedInterval:) double _lastAveragedInterval;	// G=0x31216ccd; S=0x31216ce5; @synthesize
@property(assign, nonatomic, setter=_setLastUpdatedInterval:) double _lastUpdatedInterval;	// G=0x31216ca1; S=0x31216cb9; @synthesize
@property(assign, nonatomic, setter=_setNeedsWrapper:) BOOL _needsWrapper;	// G=0x31216f15; S=0x31216f25; @synthesize
@property(retain, nonatomic) NSString *accountID;	// G=0x31202a31; S=0x31216df1; @synthesize=_accountID
@property(assign, nonatomic) unsigned long long averageTransferRate;	// G=0x31216e39; S=0x31216e51; @synthesize=_averageTransferRate
@property(readonly, assign, nonatomic) BOOL canBeAccepted;	// G=0x312168e9; 
@property(retain, nonatomic) NSDate *createdDate;	// G=0x31205aa5; S=0x31216d51; @synthesize=_createdDate
@property(assign, nonatomic) unsigned long long currentBytes;	// G=0x31205a05; S=0x31216e11; @synthesize=_currentBytes
@property(readonly, assign, nonatomic) NSString *displayName;	// G=0x3121694d; 
@property(assign, nonatomic) int error;	// G=0x31205b69; @synthesize=_error
@property(retain, nonatomic) NSString *errorDescription;	// G=0x31216ea5; @synthesize=_errorDescription
@property(readonly, assign, nonatomic) BOOL existsAtLocalPath;	// G=0x312169b1; 
@property(retain, nonatomic) NSString *filename;	// G=0x312055ed; S=0x31216d71; @synthesize=_filename
@property(retain, nonatomic) NSString *guid;	// G=0x31202a41; S=0x31216d11; @synthesize=_guid
@property(assign, nonatomic) unsigned long hfsCreator;	// G=0x31216dd1; S=0x31216de1; @synthesize=_hfsCreator
@property(assign, nonatomic) unsigned short hfsFlags;	// G=0x31216db1; S=0x31216dc1; @synthesize=_hfsFlags
@property(assign, nonatomic) unsigned long hfsType;	// G=0x31216b05; S=0x31216da1; @synthesize=_hfsType
@property(assign, nonatomic) BOOL isDirectory;	// G=0x31216e65; S=0x31216e75; @synthesize=_isDirectory
@property(readonly, assign, nonatomic) BOOL isFinished;	// G=0x31216919; 
@property(assign, nonatomic) BOOL isIncoming;	// G=0x31203015; S=0x31216d61; @synthesize=_isIncoming
@property(retain, nonatomic) NSData *localBookmark;	// G=0x31205ac5; S=0x31216c91; @synthesize=_localBookmark
@property(retain, nonatomic) NSString *localPath;	// G=0x312057c5; 
@property(retain, nonatomic) NSURL *localURL;	// G=0x312057ed; 
@property(readonly, assign, nonatomic) NSURL *localURLWithoutBookmarkResolution;	// G=0x31205ab5; @synthesize=_localURL
@property(retain, nonatomic) NSString *messageGUID;	// G=0x31216d21; S=0x31216d31; @synthesize=_messageGUID
@property(readonly, assign, nonatomic) NSString *mimeType;	// G=0x31216ab5; @synthesize=_mimeType
@property(retain, nonatomic) NSString *otherPerson;	// G=0x31203005; S=0x31216e01; @synthesize=_otherPerson
@property(assign, nonatomic) BOOL shouldAttemptToResume;	// G=0x31216e85; S=0x31216e95; @synthesize=_shouldAttemptToResume
@property(assign, nonatomic) BOOL shouldForceArchive;	// G=0x31216ed5; @synthesize=_shouldForceArchive
@property(retain, nonatomic) NSDate *startDate;	// G=0x31216d41; @synthesize=_startDate
@property(assign, nonatomic) unsigned long long totalBytes;	// G=0x3120592d; S=0x31216e25; @synthesize=_totalBytes
@property(retain, nonatomic) NSDictionary *transcoderUserInfo;	// G=0x31216f55; S=0x31216f65; @synthesize=_transcoderUserInfo
@property(retain, nonatomic) NSURL *transferDataURL;	// G=0x31216d81; @synthesize=_transferDataURL
@property(assign, nonatomic) int transferState;	// G=0x31202a21; @synthesize=_transferState
@property(retain, nonatomic) NSString *transferredFilename;	// G=0x31216f35; S=0x31216f45; @synthesize=_transferredFilename
@property(retain, nonatomic) NSString *type;	// G=0x31216add; S=0x31216d91; @synthesize=_utiType
@property(retain, nonatomic) NSDictionary *userInfo;	// G=0x31216ef5; S=0x31216f05; @synthesize=_localUserInfo
@property(assign, nonatomic, setter=setRegisteredAsStandalone:) BOOL wasRegisteredAsStandalone;	// G=0x312059f5; S=0x31216ec5; @synthesize=_wasRegisteredAsStandalone
+ (BOOL)_doesLocalURLRequireArchiving:(id)archiving;	// 0x31216295
+ (id)_invalidCharactersForFileTransferName;	// 0x31216245
- (id)init;	// 0x31216581
- (void)_calculateTypeInformation;	// 0x31216799
- (void)_clear;	// 0x31202881
- (id)_dictionaryRepresentation;	// 0x31202a51
- (id)_initWithGUID:(id)guid filename:(id)filename isDirectory:(BOOL)directory localURL:(id)url account:(id)account otherPerson:(id)person totalBytes:(unsigned long long)bytes hfsType:(unsigned long)type hfsCreator:(unsigned long)creator hfsFlags:(unsigned short)flags isIncoming:(BOOL)incoming;	// 0x312165c1
// declared property getter: - (unsigned long long)_lastAveragedBytes;	// 0x31216cf9
// declared property getter: - (double)_lastAveragedInterval;	// 0x31216ccd
// declared property getter: - (double)_lastUpdatedInterval;	// 0x31216ca1
// declared property getter: - (BOOL)_needsWrapper;	// 0x31216f15
- (void)_setAccount:(id)account otherPerson:(id)person;	// 0x31205739
- (void)_setAveragedTransferRate:(unsigned long long)rate lastAveragedInterval:(double)interval lastAveragedBytes:(unsigned long long)bytes;	// 0x31216715
- (void)_setCurrentBytes:(unsigned long long)bytes totalBytes:(unsigned long long)bytes2;	// 0x312058f9
- (void)_setDirectory:(BOOL)directory hfsType:(unsigned long)type hfsCreator:(unsigned long)creator hfsFlags:(unsigned short)flags;	// 0x31216759
- (void)_setError:(int)error;	// 0x31205b59
- (void)_setErrorDescription:(id)description;	// 0x31216eb5
- (void)_setForceArchive:(BOOL)archive;	// 0x31216ee5
// declared property setter: - (void)_setLastAveragedInterval:(double)interval;	// 0x31216ce5
// declared property setter: - (void)_setLastUpdatedInterval:(double)interval;	// 0x31216cb9
- (void)_setLocalPath:(id)path;	// 0x31216a75
- (void)_setLocalURL:(id)url;	// 0x3120554d
// declared property setter: - (void)_setNeedsWrapper:(BOOL)wrapper;	// 0x31216f25
- (void)_setStartDate:(id)date;	// 0x31205891
- (void)_setTransferDataURL:(id)url;	// 0x31216a31
- (void)_setTransferState:(int)state;	// 0x31205881
- (BOOL)_updateWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x31202245
// declared property getter: - (id)accountID;	// 0x31202a31
// declared property getter: - (unsigned long long)averageTransferRate;	// 0x31216e39
// declared property getter: - (BOOL)canBeAccepted;	// 0x312168e9
// declared property getter: - (id)createdDate;	// 0x31205aa5
// declared property getter: - (unsigned long long)currentBytes;	// 0x31205a05
- (void)dealloc;	// 0x31216205
- (id)description;	// 0x31216b2d
// declared property getter: - (id)displayName;	// 0x3121694d
// declared property getter: - (int)error;	// 0x31205b69
// declared property getter: - (id)errorDescription;	// 0x31216ea5
// declared property getter: - (BOOL)existsAtLocalPath;	// 0x312169b1
// declared property getter: - (id)filename;	// 0x312055ed
// declared property getter: - (id)guid;	// 0x31202a41
// declared property getter: - (unsigned long)hfsCreator;	// 0x31216dd1
// declared property getter: - (unsigned short)hfsFlags;	// 0x31216db1
// declared property getter: - (unsigned long)hfsType;	// 0x31216b05
// declared property getter: - (BOOL)isDirectory;	// 0x31216e65
// declared property getter: - (BOOL)isFinished;	// 0x31216919
// declared property getter: - (BOOL)isIncoming;	// 0x31203015
// declared property getter: - (id)localBookmark;	// 0x31205ac5
// declared property getter: - (id)localPath;	// 0x312057c5
// declared property getter: - (id)localURL;	// 0x312057ed
// declared property getter: - (id)localURLWithoutBookmarkResolution;	// 0x31205ab5
// declared property getter: - (id)messageGUID;	// 0x31216d21
// declared property getter: - (id)mimeType;	// 0x31216ab5
// declared property getter: - (id)otherPerson;	// 0x31203005
// declared property setter: - (void)setAccountID:(id)anId;	// 0x31216df1
// declared property setter: - (void)setAverageTransferRate:(unsigned long long)rate;	// 0x31216e51
// declared property setter: - (void)setCreatedDate:(id)date;	// 0x31216d51
// declared property setter: - (void)setCurrentBytes:(unsigned long long)bytes;	// 0x31216e11
// declared property setter: - (void)setFilename:(id)filename;	// 0x31216d71
// declared property setter: - (void)setGuid:(id)guid;	// 0x31216d11
// declared property setter: - (void)setHfsCreator:(unsigned long)creator;	// 0x31216de1
// declared property setter: - (void)setHfsFlags:(unsigned short)flags;	// 0x31216dc1
// declared property setter: - (void)setHfsType:(unsigned long)type;	// 0x31216da1
// declared property setter: - (void)setIsDirectory:(BOOL)directory;	// 0x31216e75
// declared property setter: - (void)setIsIncoming:(BOOL)incoming;	// 0x31216d61
// declared property setter: - (void)setLocalBookmark:(id)bookmark;	// 0x31216c91
// declared property setter: - (void)setMessageGUID:(id)guid;	// 0x31216d31
// declared property setter: - (void)setOtherPerson:(id)person;	// 0x31216e01
// declared property setter: - (void)setRegisteredAsStandalone:(BOOL)standalone;	// 0x31216ec5
// declared property setter: - (void)setShouldAttemptToResume:(BOOL)attemptToResume;	// 0x31216e95
// declared property setter: - (void)setTotalBytes:(unsigned long long)bytes;	// 0x31216e25
// declared property setter: - (void)setTranscoderUserInfo:(id)info;	// 0x31216f65
// declared property setter: - (void)setTransferredFilename:(id)filename;	// 0x31216f45
// declared property setter: - (void)setType:(id)type;	// 0x31216d91
// declared property setter: - (void)setUserInfo:(id)info;	// 0x31216f05
// declared property getter: - (BOOL)shouldAttemptToResume;	// 0x31216e85
// declared property getter: - (BOOL)shouldForceArchive;	// 0x31216ed5
// declared property getter: - (id)startDate;	// 0x31216d41
// declared property getter: - (unsigned long long)totalBytes;	// 0x3120592d
// declared property getter: - (id)transcoderUserInfo;	// 0x31216f55
// declared property getter: - (id)transferDataURL;	// 0x31216d81
// declared property getter: - (int)transferState;	// 0x31202a21
// declared property getter: - (id)transferredFilename;	// 0x31216f35
// declared property getter: - (id)type;	// 0x31216add
// declared property getter: - (id)userInfo;	// 0x31216ef5
// declared property getter: - (BOOL)wasRegisteredAsStandalone;	// 0x312059f5
@end

