/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library
#import "ManagedConfiguration-Structs.h"


@interface MCKeychain : NSObject {
}
+ (CFDictionaryRef)_newQueryWithService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x318e0619
+ (BOOL)addCertificateToKeychain:(SecCertificate *)keychain;	// 0x318dfcb5
+ (SecCertificate *)copyCertificateWithPersistentID:(id)persistentID;	// 0x318dffe5
+ (SecIdentity *)copyIdentityWithPersistentID:(id)persistentID;	// 0x318dffb1
+ (void *)copyItemWithPersistentID:(id)persistentID;	// 0x318e0039
+ (id)dataFromService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x318e0141
+ (BOOL)itemExistsInKeychain:(void *)keychain;	// 0x318dfd05
+ (void)removeDataForService:(id)service account:(id)account label:(id)label description:(id)description;	// 0x318e00f9
+ (void)removeItemWithPersistentID:(id)persistentID;	// 0x318dfd8d
+ (void)removeStringForService:(id)service account:(id)account label:(id)label description:(id)description;	// 0x318e058d
+ (id)saveItem:(void *)item withLabel:(id)label group:(id)group;	// 0x318dfe19
+ (BOOL)setData:(id)data forService:(id)service account:(id)account label:(id)label description:(id)description access:(void *)access outError:(id *)error;	// 0x318e02d5
+ (BOOL)setData:(id)data forService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x318e0545
+ (BOOL)setString:(id)string forService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x318e05ad
+ (id)stringFromService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x318dfc3d
@end
