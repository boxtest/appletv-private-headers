/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "STStorage.h"

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface STRootStorage : STStorage {
@private
	RootStorage *m_pCRoot;	// 8 = 0x8
	NSMutableData *m_StorageData;	// 12 = 0xc
	void *m_pvBuf;	// 16 = 0x10
}
- (id)initWithMutableData:(id)mutableData andMode:(int)mode;	// 0x34e40d9d
- (id)initWithName:(id)name andMode:(int)mode;	// 0x34e40b7d
- (void)dealloc;	// 0x34e40cad
- (id)getDocumentProperty:(int)property withId:(int)anId PropType:(int *)type;	// 0x34e40a6d
- (id)getDocumentProperty:(int)property withId:(int)anId PropType:(int *)type throwOnError:(BOOL)error;	// 0x34e40f39
- (long)getLongDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x34e4106d
- (short)getShortDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x34e41169
- (id)getStringDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x34e4126d
- (void *)resizeStorageBuffer:(unsigned long)buffer;	// 0x34e40a1d
- (void)setBlobDocumentPropertyWithId:(int)anId to:(void *)to givenPropStream:(int)stream;	// 0x34e40b55
- (void)setDefaultDocumentProperties;	// 0x34e41529
- (void)setDocumentProperty:(int)property withId:(int)anId AndType:(int)type AndValue:(void *)value;	// 0x34e414b1
- (void)setLongDocumentPropertyWithId:(int)anId to:(long)to givenPropStream:(int)stream;	// 0x34e40afd
- (void)setShortDocumentPropertyWithId:(int)anId to:(short)to givenPropStream:(int)stream;	// 0x34e40b29
- (void)setStringDocumentPropertyWithId:(int)anId to:(id)to givenPropStream:(int)stream;	// 0x34e40a91
@end

