/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/bootstrap/v3/bootstrap.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_BOOTSTRAP_V3_BOOTSTRAP_PROTO_UPBDEFS_H_
#define ENVOY_CONFIG_BOOTSTRAP_V3_BOOTSTRAP_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit;

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_Bootstrap_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.Bootstrap");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_Bootstrap_StaticResources_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.Bootstrap.StaticResources");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_Bootstrap_DynamicResources_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.Bootstrap.DynamicResources");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_Bootstrap_CertificateProviderInstancesEntry_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.Bootstrap.CertificateProviderInstancesEntry");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_Admin_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.Admin");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_ClusterManager_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.ClusterManager");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_ClusterManager_OutlierDetection_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.ClusterManager.OutlierDetection");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_Watchdogs_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.Watchdogs");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_Watchdog_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.Watchdog");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_Watchdog_WatchdogAction_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.Watchdog.WatchdogAction");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_FatalAction_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.FatalAction");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_Runtime_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.Runtime");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_RuntimeLayer_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.RuntimeLayer");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_RuntimeLayer_DiskLayer_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.RuntimeLayer.DiskLayer");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_RuntimeLayer_AdminLayer_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.RuntimeLayer.AdminLayer");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_RuntimeLayer_RtdsLayer_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.RuntimeLayer.RtdsLayer");
}

UPB_INLINE const upb_msgdef *envoy_config_bootstrap_v3_LayeredRuntime_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_bootstrap_v3_bootstrap_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.bootstrap.v3.LayeredRuntime");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_BOOTSTRAP_V3_BOOTSTRAP_PROTO_UPBDEFS_H_ */
