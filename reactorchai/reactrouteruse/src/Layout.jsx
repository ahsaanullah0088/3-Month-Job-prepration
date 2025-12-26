import React from 'react'
import Header from './components/Header/Header'
import Footer from './components/Footer/Footer'
import { Outlet } from 'react-router-dom'

const Layout = () => {
  return (
    <>
      <Header/>
        <main className="mx-auto w-full max-w-7xl">
            <Outlet />
        </main>
      <Footer/>
    </>
  )
}

export default Layout
