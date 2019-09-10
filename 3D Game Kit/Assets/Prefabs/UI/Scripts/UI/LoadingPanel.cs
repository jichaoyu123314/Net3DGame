//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:4.0.30319.42000
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace QFramework.HeNuoApp
{
    using System;
    using System.Collections;
    using System.Collections.Generic;
    using System.Linq;
    using UnityEngine;
    using UnityEngine.SceneManagement;
    using UnityEngine.UI;
    
    
    public class LoadingPanelData : QFramework.UIPanelData
    {
        public bool startLoading;
        public AsyncOperation async;
        public string targetScene;
        public string openPanel;
        public UILevel uiLevel;
        public bool allowSceneActivation;
    }
    
    public partial class LoadingPanel : QFramework.UIPanel
    {       
        protected override void ProcessMsg(int eventId, QFramework.QMsg msg)
        {
            throw new System.NotImplementedException ();
        }
        
        protected override void OnInit(QFramework.IUIData uiData)
        {
            mData = uiData as LoadingPanelData ?? new LoadingPanelData();
            // please add init code here

            StartCoroutine(LoadingScene());
        }
        
        protected override void OnOpen(QFramework.IUIData uiData)
        {
        }
        
        protected override void OnShow()
        {
        }
        
        protected override void OnHide()
        {
        }
        
        protected override void OnClose()
        {
        }

        private IEnumerator LoadingScene()
        {
            mData.startLoading = true;
            mData.async = SceneManager.LoadSceneAsync(mData.targetScene);
            mData.async.allowSceneActivation = mData.allowSceneActivation;
            mData.async.completed += Async_completed;
            yield return mData.async;
            mData.startLoading = false;

            if (mData.allowSceneActivation)
            {
                UIMgr.OpenPanel(mData.openPanel, mData.uiLevel);
                this.CloseSelf();
            }

        }

        private void Async_completed(AsyncOperation obj)
        {
            Debug.Log("�����������");
        }

        private void Update()
        {
            if (mData.startLoading)
            {
                Slider_Loading.value = mData.async.progress;
            }
        }
    }
}
