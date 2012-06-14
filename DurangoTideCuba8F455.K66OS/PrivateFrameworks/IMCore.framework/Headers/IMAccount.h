/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <NSObject.h> // Unknown library
#import "IMSystemMonitorListener.h"
#import "IMCore-Structs.h"

@class NSString, NSMutableDictionary, IMHandle, NSDictionary, IMPeople, NSData, NSArray, IMRemoteProxy, UIImage, NSDate, NSAttributedString, IMServiceImpl;
@protocol IMServiceSessionProtocol;

@interface IMAccount : NSObject <IMSystemMonitorListener> {
	IMRemoteProxy<IMServiceSessionProtocol> *_remoteSession;	// 4 = 0x4
	IMServiceImpl *_service;	// 8 = 0x8
	IMPeople *_buddyList;	// 12 = 0xc
	NSMutableDictionary *_imHandles;	// 16 = 0x10
	NSMutableDictionary *_inlineTransfers;	// 20 = 0x14
	IMHandle *_loginIMHandle;	// 24 = 0x18
	NSArray *_cachedAllowList;	// 28 = 0x1c
	NSArray *_cachedBlockList;	// 32 = 0x20
	NSString *_loginID;	// 36 = 0x24
	NSString *_displayName;	// 40 = 0x28
	NSString *_uniqueID;	// 44 = 0x2c
	NSDictionary *_data;	// 48 = 0x30
	NSMutableDictionary *_dataChanges;	// 52 = 0x34
	NSDictionary *_profile;	// 56 = 0x38
	NSMutableDictionary *_profileChanges;	// 60 = 0x3c
	NSDictionary *_accountPreferences;	// 64 = 0x40
	NSMutableDictionary *_accountPreferencesChanges;	// 68 = 0x44
	NSArray *_groups;	// 72 = 0x48
	NSMutableDictionary *_sortOrders;	// 76 = 0x4c
	NSDictionary *_members;	// 80 = 0x50
	NSMutableDictionary *_coalescedChanges;	// 84 = 0x54
	NSArray *_targetGroupState;	// 88 = 0x58
	NSArray *_lastReceivedGroupState;	// 92 = 0x5c
	UIImage *_smallImage;	// 96 = 0x60
	UIImage *_accountImage;	// 100 = 0x64
	NSDictionary *_subtypeInfo;	// 104 = 0x68
	unsigned _myStatus;	// 108 = 0x6c
	NSMutableDictionary *_currentAccountStatus;	// 112 = 0x70
	NSString *_myStatusMessage;	// 116 = 0x74
	NSDictionary *_myNowPlaying;	// 120 = 0x78
	NSDate *_myIdleSince;	// 124 = 0x7c
	NSData *_myPictureData;	// 128 = 0x80
	NSData *_accountImageData;	// 132 = 0x84
	unsigned long long _capabilities;	// 136 = 0x88
	NSAttributedString *_myProfile;	// 144 = 0x90
	int _registrationStatus;	// 148 = 0x94
	int _registrationFailureReason;	// 152 = 0x98
	NSDictionary *_registrationAlertInfo;	// 156 = 0x9c
	unsigned _loginStatus;	// 160 = 0xa0
	BOOL _isActive;	// 164 = 0xa4
	BOOL _justLoggedIn;	// 165 = 0xa5
	BOOL _asleep;	// 166 = 0xa6
	BOOL _useMeCardName;	// 167 = 0xa7
	int _cachedBlockingMode;	// 168 = 0xa8
	BOOL _blockIdleStatus;	// 172 = 0xac
	BOOL _blockOtherAddresses;	// 173 = 0xad
	BOOL _allowsVCRelay;	// 174 = 0xae
	BOOL _syncedBuddies;	// 175 = 0xaf
	BOOL _syncedWithRemoteBuddyList;	// 176 = 0xb0
	BOOL _hasReceivedSync;	// 177 = 0xb1
	int _numHolding;	// 180 = 0xb4
	int _coalesceCount;	// 184 = 0xb8
	BOOL _needToCheckForWatchedIMHandles;	// 188 = 0xbc
	BOOL _iconChecked;	// 189 = 0xbd
	BOOL _hasBeenRemoved;	// 190 = 0xbe
}
@property(retain, nonatomic) NSString *accountDescription;	// G=0x30ac08dd; S=0x30ac085d; 
@property(readonly, assign, nonatomic) NSData *accountImageData;	// G=0x30ac72c5; 
@property(readonly, assign, nonatomic) NSDictionary *accountPreferences;	// G=0x30abd3e9; 
@property(readonly, assign, nonatomic) NSDictionary *accountSubtypeInfo;	// G=0x30abd07d; 
@property(readonly, assign, nonatomic) NSArray *addressBookProperties;	// G=0x30ac01e1; 
@property(readonly, assign, nonatomic) NSString *addressBookProperty;	// G=0x30ac01c1; 
@property(readonly, assign, nonatomic) NSArray *aliases;	// G=0x30ac1d1d; 
@property(retain, nonatomic) NSArray *allowList;	// G=0x30abfd81; S=0x30abfdad; 
@property(assign, nonatomic) BOOL allowsVCRelay;	// G=0x30ac05fd; S=0x30ac05d9; 
@property(readonly, assign, nonatomic) NSArray *arrayOfAllIMHandles;	// G=0x30abe8f5; 
@property(readonly, assign, nonatomic) NSString *authorizationID;	// G=0x30abde49; 
@property(readonly, assign, nonatomic) NSString *authorizationToken;	// G=0x30abde11; 
@property(assign, nonatomic) BOOL autoLogin;	// G=0x30ac0809; S=0x30ac07e5; 
@property(assign, nonatomic) BOOL blockIdleStatus;	// G=0x30abd021; S=0x30abfd09; 
@property(retain, nonatomic) NSArray *blockList;	// G=0x30abfde9; S=0x30abfe15; 
@property(assign, nonatomic) BOOL blockOtherAddresses;	// G=0x30abfce5; S=0x30abfcb1; 
@property(assign, nonatomic) unsigned blockingMode;	// G=0x30abd011; S=0x30abfd45; 
@property(readonly, assign, nonatomic) IMPeople *buddyList;	// G=0x30abd09d; 
@property(readonly, assign, nonatomic) BOOL canActivate;	// G=0x30ac05bd; 
@property(readonly, assign, nonatomic) BOOL canBeSecure;	// G=0x30ac0c61; 
@property(readonly, assign, nonatomic) unsigned long long capabilities;	// G=0x30abd001; 
@property(readonly, assign, nonatomic) NSDictionary *dictionary;	// G=0x30ac0201; 
@property(copy, nonatomic) NSString *displayName;	// G=0x30ac1c49; S=0x30abd17d; 
@property(readonly, assign, nonatomic) NSArray *emailDomains;	// G=0x30ac01a1; 
@property(assign, nonatomic) BOOL goIdle;	// G=0x30ac066d; S=0x30ac064d; 
@property(readonly, assign, nonatomic) NSArray *groupList;	// G=0x30ac59f5; 
@property(readonly, assign, nonatomic) BOOL handlesChatInvites;	// G=0x30ac0c7d; 
@property(readonly, assign, nonatomic) BOOL hasCustomDescription;	// G=0x30ac082d; 
@property(readonly, assign, nonatomic) BOOL hasSyncedWithRemoteBuddies;	// G=0x30abd045; 
@property(readonly, assign, nonatomic) BOOL hasTargetGroupStateBeenMet;	// G=0x30abfbf1; 
@property(readonly, assign, nonatomic) NSString *internalName;	// G=0x30ac1015; 
@property(readonly, assign, nonatomic) int invalidSettings;	// G=0x30ac03f9; 
@property(assign, nonatomic, getter=isInvisible) BOOL invisible;	// G=0x30ac0a89; S=0x30ac09f1; 
@property(readonly, assign, nonatomic) BOOL isActive;	// G=0x30abd06d; 
@property(readonly, assign, nonatomic) BOOL isAwaitingTargetGroupState;	// G=0x30abd031; 
@property(readonly, assign, nonatomic) BOOL isConnected;	// G=0x30abeb4d; 
@property(readonly, assign, nonatomic) BOOL isConnecting;	// G=0x30abeb81; 
@property(readonly, assign, nonatomic) BOOL isManaged;	// G=0x30ac0471; 
@property(readonly, assign, nonatomic) BOOL justLoggedIn;	// G=0x30abd0ad; 
@property(retain, nonatomic) NSString *login;	// G=0x30abcf81; S=0x30ac123d; 
@property(readonly, assign, nonatomic) id loginIMHandle;	// G=0x30abd08d; 
@property(readonly, assign, nonatomic) unsigned loginStatus;	// G=0x30abd0e1; @synthesize=_loginStatus
@property(readonly, assign, nonatomic) NSString *loginStatusMessage;	// G=0x30abebc9; 
@property(readonly, assign, nonatomic) BOOL makingChanges;	// G=0x30abd055; 
@property(readonly, assign, nonatomic) NSDate *myIdleSince;	// G=0x30abcff1; 
@property(readonly, assign, nonatomic) NSString *myNowPlayingString;	// G=0x30ac1161; 
@property(readonly, assign, nonatomic) NSData *myPictureData;	// G=0x30abcfe1; 
@property(readonly, assign, nonatomic) NSAttributedString *myProfile;	// G=0x30abcfb1; 
@property(readonly, assign, nonatomic) unsigned myStatus;	// G=0x30abcfc1; 
@property(readonly, assign, nonatomic) NSDictionary *myStatusDictionary;	// G=0x30abcfa1; 
@property(readonly, assign, nonatomic) NSString *myStatusMessage;	// G=0x30abcfd1; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x30ac0fd1; 
@property(readonly, assign, nonatomic) NSString *password;	// G=0x30ac0bf5; 
@property(readonly, assign, nonatomic) int port;	// G=0x30ac068d; 
@property(readonly, assign, nonatomic) NSDictionary *profileInfo;	// G=0x30abdd31; 
@property(readonly, assign, nonatomic) int registrationFailureReason;	// G=0x30abecb9; 
@property(readonly, assign, nonatomic) int registrationStatus;	// G=0x30abece9; 
@property(assign, nonatomic) BOOL secureImEnabled;	// G=0x30ac0341; S=0x30ac0385; 
@property(readonly, assign, nonatomic) NSString *server;	// G=0x30ac06d9; 
@property(readonly, assign, nonatomic) IMServiceImpl *service;	// G=0x30abcf91; 
@property(readonly, assign, nonatomic) NSString *serviceName;	// G=0x30ac0fb1; 
@property(readonly, assign, nonatomic) NSString *shortName;	// G=0x30ac1035; 
@property(readonly, assign, nonatomic) BOOL supportsAuthorization;	// G=0x30abde81; 
@property(readonly, assign, nonatomic) BOOL supportsRegistration;	// G=0x30abf00d; 
@property(readonly, assign, nonatomic) NSString *uniqueID;	// G=0x30ac10f9; 
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x30ac07c1; 
@property(readonly, assign, nonatomic) BOOL validLogin;	// G=0x30ac74e5; 
@property(readonly, assign, nonatomic) BOOL validPort;	// G=0x30ac0539; 
@property(readonly, assign, nonatomic) BOOL validServer;	// G=0x30ac0495; 
+ (id)_groupSummaryFromGroupList:(id)groupList;	// 0x30ac2f45
+ (id)allBuddyListIMHandles;	// 0x30ac2281
+ (id)arrayOfAllIMHandles;	// 0x30ac23a5
+ (id)nameOfLoginStatus:(unsigned)loginStatus;	// 0x30ac1a41
+ (id)passwordForAccount:(id)account forServiceName:(id)serviceName;	// 0x30ac7b39
+ (void)removePasswordForAccount:(id)account forServiceName:(id)serviceName;	// 0x30ac7b95
+ (void)setPassword:(id)password forAccount:(id)account forServiceName:(id)serviceName;	// 0x30ac7b6d
- (id)initWithService:(id)service;	// 0x30ac1301
- (id)initWithUniqueID:(id)uniqueID service:(id)service;	// 0x30ac13bd
- (id)_aliasInfoForAlias:(id)alias;	// 0x30ac1f9d
- (id)_aliases;	// 0x30abd9a1
- (void)_applyChangesToTemporaryCache:(id)temporaryCache;	// 0x30ac63e1
- (void)_ensureGroupsExists:(id)exists;	// 0x30ac2e49
- (void)_loginWithAutoLogin:(BOOL)autoLogin;	// 0x30ac1b41
- (void)_notJustLoggedIn;	// 0x30abebf9
- (void)_refreshLoginIMHandle;	// 0x30ac3695
- (id)_remoteSession;	// 0x30abd0d1
- (void)_resumeBuddyUpdatesNow;	// 0x30abf0e9
- (id)_serverWithSSL:(BOOL)ssl;	// 0x30ac7629
- (void)_serviceDidConnect:(id)_service;	// 0x30abf0a1
- (void)_serviceDidDisconnect:(id)_service;	// 0x30abf075
- (void)_serviceDidReconnect:(id)_service;	// 0x30abf08d
- (id)_statuses;	// 0x30ac1e69
- (void)_syncWithRemoteBuddies;	// 0x30abea25
- (BOOL)_updateDisplayName:(id)name;	// 0x30abd0f1
- (void)_updateLogin:(id)login;	// 0x30ac1275
- (void)_updateMyStatus:(unsigned)status message:(id)message;	// 0x30ac118d
- (void)_updateProfileInfo:(id)info;	// 0x30abd9c1
- (void)_updateRegistrationStatus:(int)status error:(int)error info:(id)info;	// 0x30abed11
- (void)_watchBuddiesIfNecessary;	// 0x30ac3b75
// declared property getter: - (id)accountDescription;	// 0x30ac08dd
- (void)accountDidBecomeActive;	// 0x30abf061
- (void)accountDidDeactivate;	// 0x30abf031
// declared property getter: - (id)accountImageData;	// 0x30ac72c5
// declared property getter: - (id)accountPreferences;	// 0x30abd3e9
// declared property getter: - (id)accountSubtypeInfo;	// 0x30abd07d
- (void)accountWillBeRemoved;	// 0x30ac5981
- (BOOL)addAlias:(id)alias;	// 0x30abd891
- (BOOL)addAlias:(id)alias type:(int)type;	// 0x30abd879
- (void)addBuddyToBuddyList:(id)buddyList;	// 0x30abf7a5
- (BOOL)addIMHandle:(id)handle toGroups:(id)groups atLocation:(int)location;	// 0x30abf8c1
- (BOOL)addIMHandle:(id)handle toIMPerson:(id)imperson;	// 0x30ac5759
- (BOOL)addPeople:(id)people toGroups:(id)groups atLocation:(int)location;	// 0x30ac2ccd
// declared property getter: - (id)addressBookProperties;	// 0x30ac01e1
// declared property getter: - (id)addressBookProperty;	// 0x30ac01c1
// declared property getter: - (id)aliases;	// 0x30ac1d1d
- (id)aliasesForType:(int)type;	// 0x30abd919
// declared property getter: - (id)allowList;	// 0x30abfd81
// declared property getter: - (BOOL)allowsVCRelay;	// 0x30ac05fd
// declared property getter: - (id)arrayOfAllIMHandles;	// 0x30abe8f5
// declared property getter: - (id)authorizationID;	// 0x30abde49
// declared property getter: - (id)authorizationToken;	// 0x30abde11
// declared property getter: - (BOOL)autoLogin;	// 0x30ac0809
- (void)autoLoginAccount;	// 0x30ac12e9
- (void)beginChanges;	// 0x30abfa15
// declared property getter: - (BOOL)blockIdleStatus;	// 0x30abd021
// declared property getter: - (id)blockList;	// 0x30abfde9
- (void)blockMessages:(BOOL)messages fromID:(id)anId;	// 0x30abfe51
// declared property getter: - (BOOL)blockOtherAddresses;	// 0x30abfce5
// declared property getter: - (unsigned)blockingMode;	// 0x30abd011
- (BOOL)boolForKey:(id)key;	// 0x30abd581
- (BOOL)boolForPreferenceKey:(id)preferenceKey;	// 0x30abd2a5
// declared property getter: - (id)buddyList;	// 0x30abd09d
- (void)buddyPictureChanged:(id)changed imageData:(id)data imageHash:(id)hash;	// 0x30ac4821
- (void)buddyPropertiesChanged:(id)changed;	// 0x30ac48a5
// declared property getter: - (BOOL)canActivate;	// 0x30ac05bd
// declared property getter: - (BOOL)canBeSecure;	// 0x30ac0c61
- (id)canonicalFormOfID:(id)anId;	// 0x30ac76e9
// declared property getter: - (unsigned long long)capabilities;	// 0x30abd001
- (void)changeBuddyList:(id)list add:(BOOL)add groups:(id)groups atLocation:(int)location;	// 0x30ac5ad5
- (id)chatIDForRoomName:(id)roomName;	// 0x30abe10d
- (void)clearServiceCaches;	// 0x30ac1319
- (void)clearTargetState;	// 0x30abfc5d
- (int)compareAccountNames:(id)names;	// 0x30ac0e55
- (int)compareIDs:(id)ids;	// 0x30ac0e09
- (int)compareLoginStatus:(id)status;	// 0x30ac0ea9
- (int)compareNames:(id)names;	// 0x30abe9e5
- (int)compareServices:(id)services;	// 0x30ac0db5
- (int)compareStatus:(id)status;	// 0x30ac7a85
- (void)dealloc;	// 0x30ac168d
- (id)defaultChatSuffix;	// 0x30abe0d1
- (unsigned long long)defaultHandleCapabilities;	// 0x30abe5e9
- (id)description;	// 0x30ac0705
// declared property getter: - (id)dictionary;	// 0x30ac0201
- (id)dictionaryDataForKey:(id)key;	// 0x30abd645
- (id)dictionaryDataForPreferenceKey:(id)preferenceKey;	// 0x30abd361
- (void)disableCertificatesForIMHandle:(id)imhandle;	// 0x30ac03a9
- (void)disconnectAllIMHandles;	// 0x30ac20b1
// declared property getter: - (id)displayName;	// 0x30ac1c49
- (BOOL)emailAddressIsID:(id)anId;	// 0x30ac0ef5
// declared property getter: - (id)emailDomains;	// 0x30ac01a1
- (void)enableSecureIM:(BOOL)im;	// 0x30ac03d1
- (void)endChanges;	// 0x30abf20d
- (BOOL)equalID:(id)anId andID:(id)anId2;	// 0x30ac0f8d
- (id)existingIMHandleWithID:(id)anId;	// 0x30abe6a1
- (id)existingIMHandleWithID:(id)anId alreadyCanonical:(BOOL)canonical;	// 0x30abe6b9
- (id)existingIMHandleWithInfo:(id)info;	// 0x30abe7ed
- (id)existingIMHandleWithInfo:(id)info alreadyCanonical:(BOOL)canonical;	// 0x30abe6fd
- (void)finalize;	// 0x30ac19a9
- (void)forgetAllWatches;	// 0x30ac3921
// declared property getter: - (BOOL)goIdle;	// 0x30ac066d
// declared property getter: - (id)groupList;	// 0x30ac59f5
- (id)groupMembers:(id)members;	// 0x30abf351
- (void)groupsChanged:(id)changed error:(id)error;	// 0x30ac24d1
- (void)handleSubscriptionRequestFrom:(id)from withMessage:(id)message;	// 0x30abe269
// declared property getter: - (BOOL)handlesChatInvites;	// 0x30ac0c7d
- (BOOL)hasAlias:(id)alias;	// 0x30abd945
- (BOOL)hasAlias:(id)alias type:(int)type;	// 0x30abd92d
- (BOOL)hasCapability:(unsigned long long)capability;	// 0x30ac0d89
// declared property getter: - (BOOL)hasCustomDescription;	// 0x30ac082d
// declared property getter: - (BOOL)hasSyncedWithRemoteBuddies;	// 0x30abd045
// declared property getter: - (BOOL)hasTargetGroupStateBeenMet;	// 0x30abfbf1
- (void)holdBuddyUpdates;	// 0x30abf1b9
- (void)hookupToDaemon;	// 0x30abf9d5
- (void)imHandle:(id)handle buddyStatusChanged:(BOOL)changed;	// 0x30ac34fd
- (Class)imHandleClass;	// 0x30abe8d5
- (id)imHandleWithID:(id)anId;	// 0x30abe541
- (id)imHandleWithID:(id)anId alreadyCanonical:(BOOL)canonical;	// 0x30abe559
- (id)imHandleWithInfo:(id)info;	// 0x30abe861
- (id)imHandleWithInfo:(id)info alreadyCanonical:(BOOL)canonical;	// 0x30abe775
- (id)imHandlesForIMPerson:(id)imperson;	// 0x30ac3ca1
- (int)integerForKey:(id)key;	// 0x30abd4ed
- (int)integerForPreferenceKey:(id)preferenceKey;	// 0x30abd211
// declared property getter: - (id)internalName;	// 0x30ac1015
// declared property getter: - (int)invalidSettings;	// 0x30ac03f9
// declared property getter: - (BOOL)isActive;	// 0x30abd06d
// declared property getter: - (BOOL)isAwaitingTargetGroupState;	// 0x30abd031
// declared property getter: - (BOOL)isConnected;	// 0x30abeb4d
// declared property getter: - (BOOL)isConnecting;	// 0x30abeb81
// declared property getter: - (BOOL)isInvisible;	// 0x30ac0a89
// declared property getter: - (BOOL)isManaged;	// 0x30ac0471
// declared property getter: - (BOOL)justLoggedIn;	// 0x30abd0ad
- (void)loadFromDictionary:(id)dictionary;	// 0x30ac49a9
// declared property getter: - (id)login;	// 0x30abcf81
- (void)loginAccount;	// 0x30ac12d1
// declared property getter: - (id)loginIMHandle;	// 0x30abd08d
// declared property getter: - (unsigned)loginStatus;	// 0x30abd0e1
- (void)loginStatusChanged:(unsigned)changed message:(id)message reason:(unsigned)reason properties:(id)properties;	// 0x30ac7bb9
// declared property getter: - (id)loginStatusMessage;	// 0x30abebc9
- (void)logoutAccount;	// 0x30ac3349
// declared property getter: - (BOOL)makingChanges;	// 0x30abd055
- (id)memberGroups:(id)groups;	// 0x30abf331
// declared property getter: - (id)myIdleSince;	// 0x30abcff1
// declared property getter: - (id)myNowPlayingString;	// 0x30ac1161
// declared property getter: - (id)myPictureData;	// 0x30abcfe1
// declared property getter: - (id)myProfile;	// 0x30abcfb1
// declared property getter: - (unsigned)myStatus;	// 0x30abcfc1
// declared property getter: - (id)myStatusDictionary;	// 0x30abcfa1
// declared property getter: - (id)myStatusMessage;	// 0x30abcfd1
// declared property getter: - (id)name;	// 0x30ac0fd1
- (void)nowLoggedIn;	// 0x30abd0bd
- (void)nowLoggedOut;	// 0x30abe241
- (id)objectForKey:(id)key;	// 0x30abd685
- (id)objectForPreferenceKey:(id)preferenceKey;	// 0x30abd3a1
// declared property getter: - (id)password;	// 0x30ac0bf5
- (id)personForIMHandle:(id)imhandle;	// 0x30abe4f5
- (id)personSibsForIMHandle:(id)imhandle;	// 0x30abe4c9
// declared property getter: - (int)port;	// 0x30ac068d
// declared property getter: - (id)profileInfo;	// 0x30abdd31
- (id)profileStringForKey:(id)key;	// 0x30abdca9
- (int)profileValidationErrorReason;	// 0x30abdc15
- (int)profileValidationStatus;	// 0x30abdc45
- (id)profileValueForKey:(id)key;	// 0x30abdcf5
- (id)propertiesForGroup:(id)group;	// 0x30abf381
- (void)recalculateSubtypeInfo;	// 0x30abe915
- (id)recalculatedSubtypeInfo;	// 0x30abe9bd
- (BOOL)registerAccount;	// 0x30abec7d
- (void)registerIMHandle:(id)handle;	// 0x30abe319
// declared property getter: - (int)registrationFailureReason;	// 0x30abecb9
// declared property getter: - (int)registrationStatus;	// 0x30abece9
- (BOOL)removeAlias:(id)alias;	// 0x30abd7ed
- (BOOL)removeAlias:(id)alias type:(int)type;	// 0x30abd7d5
- (BOOL)removeIMHandle:(id)handle fromGroups:(id)groups;	// 0x30abf85d
- (BOOL)removeIMHandle:(id)handle fromIMPerson:(id)imperson;	// 0x30ac561d
- (void)removeObjectForKey:(id)key;	// 0x30abd66d
- (void)removeObjectForPreferenceKey:(id)preferenceKey;	// 0x30abd389
- (void)removePassword;	// 0x30ac0aad
- (BOOL)removePeople:(id)people fromGroups:(id)groups;	// 0x30abf905
- (BOOL)removeProfileValueForKey:(id)key;	// 0x30abdc75
- (void)renameGroup:(id)group to:(id)to;	// 0x30abf645
- (void)reorderGroup:(id)group order:(id)order;	// 0x30abf51d
- (void)reorderGroups:(id)groups;	// 0x30abf439
- (void)requestBuddyListAuthorizationFromIMHandle:(id)imhandle;	// 0x30abe40d
- (void)requestGroups;	// 0x30abf9b1
- (BOOL)requestNewAuthorizationCredentials;	// 0x30abddd5
- (void)requestProperty:(id)property ofIMHandle:(id)imhandle;	// 0x30ac0315
- (void)resetToDefaults;	// 0x30ac0f2d
- (void)resumeBuddyUpdates;	// 0x30abf0b5
// declared property getter: - (BOOL)secureImEnabled;	// 0x30ac0341
// declared property getter: - (id)server;	// 0x30ac06d9
// declared property getter: - (id)service;	// 0x30abcf91
// declared property getter: - (id)serviceName;	// 0x30ac0fb1
// declared property setter: - (void)setAccountDescription:(id)description;	// 0x30ac085d
// declared property setter: - (void)setAllowList:(id)list;	// 0x30abfdad
// declared property setter: - (void)setAllowsVCRelay:(BOOL)relay;	// 0x30ac05d9
// declared property setter: - (void)setAutoLogin:(BOOL)login;	// 0x30ac07e5
// declared property setter: - (void)setBlockIdleStatus:(BOOL)status;	// 0x30abfd09
// declared property setter: - (void)setBlockList:(id)list;	// 0x30abfe15
// declared property setter: - (void)setBlockOtherAddresses:(BOOL)addresses;	// 0x30abfcb1
// declared property setter: - (void)setBlockingMode:(unsigned)mode;	// 0x30abfd45
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x30abd545
- (void)setBool:(BOOL)aBool forPreferenceKey:(id)preferenceKey;	// 0x30abd269
- (void)setBuddyListAuthorization:(BOOL)authorization forIMHandle:(id)imhandle;	// 0x30abe449
- (void)setBuddyProperties:(id)properties buddyPictures:(id)pictures;	// 0x30ac44a5
- (void)setCachedAllowList:(id)list;	// 0x30ac3211
- (void)setCachedBlockIdleStatus:(BOOL)status;	// 0x30ac0119
- (void)setCachedBlockList:(id)list;	// 0x30ac30d9
- (void)setCachedBlockingMode:(unsigned)mode;	// 0x30ac015d
- (void)setCurrentAccountStatus:(id)status;	// 0x30ac5069
- (void)setDictionaryData:(id)data forKey:(id)key;	// 0x30abd659
- (void)setDictionaryData:(id)data forPreferenceKey:(id)preferenceKey;	// 0x30abd375
// declared property setter: - (void)setDisplayName:(id)name;	// 0x30abd17d
// declared property setter: - (void)setGoIdle:(BOOL)idle;	// 0x30ac064d
- (void)setIMAccountLoginStatus:(unsigned)status;	// 0x30abeac1
- (void)setIMAccountLoginStatus:(unsigned)status errorMessage:(id)message;	// 0x30abeaa1
- (void)setIMAccountLoginStatus:(unsigned)status errorMessage:(id)message reason:(unsigned)reason;	// 0x30ac40a9
- (void)setInteger:(int)integer forKey:(id)key;	// 0x30abd4b5
- (void)setInteger:(int)integer forPreferenceKey:(id)preferenceKey;	// 0x30abd1d9
// declared property setter: - (void)setInvisible:(BOOL)invisible;	// 0x30ac09f1
- (void)setIsActive:(BOOL)active;	// 0x30abead9
// declared property setter: - (void)setLogin:(id)login;	// 0x30ac123d
- (void)setObject:(id)object forKey:(id)key;	// 0x30ac53dd
- (void)setObject:(id)object forPreferenceKey:(id)preferenceKey;	// 0x30ac533d
- (void)setPassword:(id)password;	// 0x30ac0b39
- (BOOL)setProfileString:(id)string forKey:(id)key;	// 0x30ac547d
- (BOOL)setProfileValue:(id)value forKey:(id)key;	// 0x30ac54f1
// declared property setter: - (void)setSecureImEnabled:(BOOL)enabled;	// 0x30ac0385
- (void)setSigningCertificate:(SecCertificate *)certificate encryptionCertificate:(SecCertificate *)certificate2;	// 0x30ac7acd
- (void)setString:(id)string forKey:(id)key;	// 0x30abd5dd
- (void)setString:(id)string forPreferenceKey:(id)preferenceKey;	// 0x30abd301
- (void)setTargetGroupsState:(id)state;	// 0x30abfa85
- (void)setUniqueID:(id)anId;	// 0x30ac1095
- (void)setValue:(id)value ofExtraProperty:(id)extraProperty ofIMHandle:(id)imhandle;	// 0x30ac02e1
- (void)setWaitForTargetState;	// 0x30abfb51
// declared property getter: - (id)shortName;	// 0x30ac1035
- (unsigned)sortOrderForIMHandle:(id)imhandle inGroup:(id)group;	// 0x30abe495
- (void)startWatchingIMHandle:(id)handle;	// 0x30ac3ab1
- (unsigned)status;	// 0x30abcf71
- (void)stopWatchingIMHandle:(id)handle;	// 0x30ac3a11
- (id)stringForKey:(id)key;	// 0x30abd5f1
- (id)stringForPreferenceKey:(id)preferenceKey;	// 0x30abd315
// declared property getter: - (BOOL)supportsAuthorization;	// 0x30abde81
// declared property getter: - (BOOL)supportsRegistration;	// 0x30abf00d
- (void)syncWithRemoteBuddies;	// 0x30abf94d
- (void)systemDidWake;	// 0x30abd0c1
- (void)systemWillSleep;	// 0x30abd48d
- (void)targetGroupStateTimeout;	// 0x30abfba9
- (int)typeForAlias:(id)alias;	// 0x30ac747d
// declared property getter: - (id)uniqueID;	// 0x30ac10f9
- (BOOL)unregisterAccount;	// 0x30abec41
- (void)unregisterIMHandle:(id)handle;	// 0x30abe2e1
- (void)updateCapabilities:(unsigned long long)capabilities;	// 0x30ac0ca1
- (void)updateWithTargetGroups;	// 0x30abfb2d
// declared property getter: - (BOOL)useSSL;	// 0x30ac07c1
// declared property getter: - (BOOL)validLogin;	// 0x30ac74e5
// declared property getter: - (BOOL)validPort;	// 0x30ac0539
// declared property getter: - (BOOL)validServer;	// 0x30ac0495
- (BOOL)validateAlias:(id)alias;	// 0x30abd795
- (BOOL)validateAlias:(id)alias type:(int)type;	// 0x30abd77d
- (BOOL)validateProfile;	// 0x30ac349d
- (int)validationErrorReasonForAlias:(id)alias;	// 0x30abd6e1
- (int)validationErrorReasonForAlias:(id)alias type:(int)type;	// 0x30abd6cd
- (int)validationStatusForAlias:(id)alias;	// 0x30abd73d
- (int)validationStatusForAlias:(id)alias type:(int)type;	// 0x30abd729
- (FZChatRoomValidity)validityOfChatRoomName:(id)chatRoomName;	// 0x30abdea5
- (void)watchBuddiesIfNecessary;	// 0x30abe3ad
- (void)writeSettings;	// 0x30ac7829
@end
